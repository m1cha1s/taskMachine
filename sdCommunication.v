`timescale 1ns / 1ps

module sdCommunication(clk, sdClk, state, sdDataIn, sdDataOut, sdCommand, sdResponse, command, response, byteOut, send, doneSending, byteComp);

input clk, sdResponse, sdDataIn, send;
output sdClk, sdCommand, sdDataOut, doneSending, byteComp;
output [135:0] response;
output [7:0] byteOut;
output [2:0] state;
reg sdClk, sdCommand, sdDataOut, doneSending = 0;

input [47:0] command;
reg [135:0] response;
reg [7:0] buffer;
reg [7:0] byteOut;
reg byteComp;

reg clkEn = 1;

reg [8:0] div;
reg [8:0] divVal=255;
always @(posedge clk) begin 
	if(div == divVal) begin
		div <= 0;
		if(clkEn) sdClk <= ~sdClk;
	end
	else div <= div + 1;
end

reg [47:0] shiftOut;

reg [5:0] sending = 0;
reg [7:0] receiveing = 0;
reg [8:0] gathering = 0;
reg [3:0] byteCounter = 0;

reg [6:0] init;
reg [2:0] state = 0;

reg [1:0] to = 0;

reg start = 0;

always @(negedge sdResponse) begin
	if(state == 4)	start <= 1;
end

always @(posedge sdClk) begin
	case(state)
	
		0: begin //init
			if(init < 74) begin
				init <= init + 1;
				sdCommand <= 1;
				sdDataOut <= 1;
				doneSending <= 0;
			end
			else begin
				state <= 1;
				doneSending <= 1;
				divVal <= 128;
				clkEn <= 1;
				sdCommand <= 1;
				sdDataOut <= 1;
			end
		end
		
		1: begin //idle
			sdCommand <= 1;
			sdDataOut <= 1;
			doneSending <= 1;
			if(send == 1) begin
				state <= 2;
				doneSending <= 0;
			end
		end
		
		2: begin //transmitting
			if(sending < 48) begin
				sdCommand <= command>>(47-sending);
				sending <= sending + 1;
			end
			else begin
				sending <= 0;
				state <= 3;
				doneSending <= 1;
			end
		end
		
		3: begin //takeover fpga > sd
			if(to < 2) begin
				sdCommand <= 0;
				sdDataOut <= 0;
				to <= to + 1;
			end
			else begin
				state <= 4;
				to <= 0;
			end
		end
		
		4: begin //receiveing
			if(command[45:39] == 0) state <= 5;
			else begin
				if(receiveing < 136) begin
					if(start) begin
						response <= response<<1|sdResponse;
						receiveing <= receiveing + 1;
					end
					else begin
						state <= 5;
					end
					if(gathering < 512) begin
						if(byteCounter < 8) begin
							byteComp <= 0;
							buffer[byteCounter] <= sdDataIn;
						end
						else begin
							byteCounter <= 0;
							byteOut <= buffer;
							byteComp <= 1;
						end
					end
					else gathering <= 0;
				end
			end
		end
		
		5: begin //handover sd> fpga
			if(to < 2) begin
				sdCommand <= 0;
				sdDataOut <= 0;
				to <= to + 1;
			end
			else begin
				state <= 1;
				to <= 0;
			end
		end
		
	endcase
end

endmodule
