`timescale 1ns / 1ps

module core(fastClk, medClk, pData, cData, pData);

input fastClk, medClk;
inout [22:0] pData;
inout [17:0] cData;

reg [14:0] pMap;

assign pData[7:0] = pMap[7:0];
assign pData[22:16] = pMap[14:8];

//wire clk;
//assign clk = fastClk;
//wire progMode, hlt;
//wire [5:0] progAddr;
//wire [7:0] progBus;
//reg [5:0] pAddr = 0;
//wire [7:0] pinBus;							
//reg [7:0] poutBus = 0;
//reg we = 0, free = 1;



reg [7:0] storage = 0;
reg [5:0] addr = 0;
reg [5:0] next = 0;
reg [1:0] command = 0;
reg [5:0] dest = 0;
reg [1:0] step = 0;
reg comIn = 1;
wire [7:0] rout;
reg [7:0] rin;
reg rwe;
reg localHlt = 0;
reg [5:0] prev;

always @(posedge medClk) begin
	if((cData[15] == 0) && (cData[14] == 0) && (cData[16] == 0) && localHlt == 0) begin
		if(comIn == 1) begin
			command <= rout[7:6];
			dest <= rout[5:0];
			comIn <= 0;
		end
		else begin
			case(command)
				2'b00: begin
					case(step)
						0: begin 
							next <= addr + 1;
							addr <= dest;
							step <= step + 1;
							pMap[14] <= 0;
						end
						1: begin
							pMap[14] <= 0;
							storage <= rout;
							step <= step + 1;
						end
						2: begin
							addr <= next;
							step <= 0;
							comIn <= 1;
							prev <= next;
						end
					endcase
				end
				2'b01: begin
					case(step)
						0: begin
							next <= addr + 1;
							addr <= dest;
							step <= step + 1;
							pMap[14] <= 0;
						end
						1: begin
							pMap[14] <= 0;
							rwe <= 1;
							rin <= storage;
							step <= step + 1;
						end
						2: begin
							rwe <= 0;
							addr <= next;
							step <= 0;
							comIn <= 1;
							prev <= next;
						end
					endcase
				end
				2'b10: begin
					case(step)
						0: begin
							next <= addr + 1;
							pMap[13:8] <= dest;
							step <= step + 1;
							pMap[14] <= 0;
						end
						1: begin
							pMap[14] <= 0;
							storage <= pData[15:8];
							step <= step + 1;
						end
						2: begin
							addr <= next;
							step <= 0;
							comIn <= 1;
							prev <= next;
						end
					endcase
				end
				2'b11: begin
					case(step)
						0: begin
							next <= addr + 1;
							pMap[13:8] <= dest;
							step <= step + 1;
							pMap[14] <= 0;
						end
						1: begin
							pMap[14] <= 1;
							pMap[7:0] <= storage;
							step <= step + 1;
						end
						2: begin
							addr <= next;
							step <= 0;
							comIn <= 1;
							prev <= next;
						end
					endcase
				end
			endcase
			if(prev > next) localHlt <= 1;
		end
	end
	if(~((cData[15] == 0) && (cData[14] == 0) && (cData[16] == 0))) begin
		if(cData[14]) begin
			localHlt <= 0;
			rwe <= 1;
			rin <= cData[7:0];
			step <= 0;
			comIn <= 1;
			pMap[13:8] <= 0;
			pMap[7:0] <= 0;
			pMap[14] <= 0; 
			addr <= cData[13:8];
			next <= 0;
			prev <= 0;
			command <= 0;
			dest <= 0;
			step <= 0;
			comIn <= 1;
		end
		else begin
			rwe <= 0;
			addr <= 0;
		end
	end
end


assign cData[16] = (addr==63)|cData[14]|cData[15] ? 1 : 0;

coreRam ram(.clka(fastClk), .wea(rwe), .addra(addr), .dina(rin), .douta(rout));

endmodule
