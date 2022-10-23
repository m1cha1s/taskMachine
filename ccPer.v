`timescale 1ns / 1ps


module ccPer(fastClk, pData, cData, rData);

input fastClk;
inout [22:0] pData;
inout [17:0] cData;
inout [25:0] rData;

reg [15:8] cMap;
reg [15:0] rMap;
reg [7:0] pMap;

reg ar;

assign cData[15:8] = cMap;
assign rData[23:8] = rMap;
assign rData[24] = ar;
assign cData[7:0] = ar ? rData[7:0] : 0;

reg [7:0] A = 0;
reg [7:0] B = 0;


assign pData[15:8] = (pData[21:16]==20&&pData[22]==0) ? A + B : (pData[21:16]==21&&pData[22]==0) ? A - B : (pData[21:16]==22&&pData[22]==0) ? A * B : (pData[21:16]==23&&pData[22]==0) ? A | B : (pData[21:16]==24&&pData[22]==0) ? A && B : (pData[21:16]==25&&pData[22]==0) ? ~A : (pData[21:16]==26&&pData[22]==0) ? A << 1 : (pData[21:16]==27&&pData[22]==0) ? A >> 1 : 8'bz;

always @(negedge fastClk) begin
	if(pData[21:16] == 20) if(pData[22]==1) begin
		A <= pData[7:0];
	end
	if(pData[21:16] == 21) if(pData[22]==1) begin
		B <= pData[7:0];
	end
end

reg [3:0] ccState;
reg [6:0] load;
reg [6:0] lBuff;
reg [15:0] pivot = 0;
reg [7:0] loadSize = 64;
initial begin
	ccState <= 0;
	load <= 0;
end
always @(posedge fastClk) lBuff <= load;
always @(negedge fastClk) begin
	if(pData[21:16] == 2) if(pData[22]) loadSize <= pData[7:0]; 
	if(ccState == 0) begin // initial upload to core
		cMap[14] <= 1;
		cMap[15] <= 0;
		ar <= 1;
		if(rData[25]) begin
			if(load < 64) begin
				rMap <= load;
				cMap[13:8] <= load;
				load <= load + 1;
			end
			else begin
				cMap[14] <= 0;
				ccState <= 1;
				load <= 0;
				ar <= 0;
			end
		end
	end
	if(ccState == 1) begin // waiting for request
		if(pData[21:16] == 0) if(pData[22]) begin // hlt request
			cMap[15] <= 1;
		end
		if(pData[21:16] == 1) if(pData[22]) begin // setting a pivot for a jump and executing a jump or loading a new code
			ccState <= 2;
			pivot[15:0] <= pData[7:0];
			load <= 0;
		end
		if(pData[21:16] == 2) if(pData[22]) begin // conditional jmp or program load
			if(A-B == 0) begin
				ccState <= 2;
				pivot <= pData[7:0];
				load <= 0;
			end
		end
		if(pData[21:16] == 3) if(pData[22]) begin // conditional jmp or program load
			if(A < B) begin
				ccState <= 2;
				pivot <= pData[7:0];
				load <= 0;
			end
		end
	end
	if(ccState == 2) begin // uploading to core on core request
		cMap[14] <= 1;
		cMap[15] <= 0;
		ar <= 1;
		if(rData[25]) begin
			if(load < loadSize) begin
				rMap[15:0] <= lBuff + pivot;
				cMap[13:8] <= lBuff;
				load <= load + 1;
			end
			else begin
				cMap[14] <= 0;
				load <= 0;
				ccState <= 1;
				ar <= 0;
			end
		end
	end
end

endmodule
