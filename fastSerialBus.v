`timescale 1ns / 1ps

module fastSerialBus (clk, RxTx, tDP, tEN, tDONE, rDP, rEN, rDONE, cycle);

input wire clk;
inout wire RxTx;
input wire tEN, rEN;
output reg tDONE = 0, rDONE = 0;
input wire [7:0] tDP;
output reg [7:0] rDP;
input wire [15:0] cycle;

reg [1:0] mode; // 0 rx ; 1 tx ; 2 stb

reg rxBegin = 0;
reg txBegin = 0;

reg rxStart = 0;
reg txStart = 0;

reg [15:0] bitNum = 0;
reg [15:0] cycleStep = 0;

reg tx = 0;

always @(posedge rEN) begin
	mode <= 0;
	rDONE <= 0;
end
always @(posedge tEN) begin
	mode <= 1;
	tDONE <= 0;
end

assign RxTx = mode[0] ? tx : 1'bz;

always @(posedge RxTx) begin
	if(mode == 0) begin
		if(!rxBegin) rxBegin <= 1;
	end
end

always @(negedge clk) begin
	if(rxBegin | txBegin) cycleStep <= cycleStep + 1;
end

always @(posedge clk) begin
	////////////////////////////////////////////////////////////////
	// receive
	////////////////////////////////////////////////////////////////
	if(rxBegin && !rxStart) begin
		if(cycleStep == (cycle/2)+cycle) begin
			rxStart <= 1;
			cycleStep <= 0;
		end
	end
	if(rxBegin && rxStart) begin
		if(cycleStep == cycle) begin
			rDP[bitNum] <= RxTx;
			bitNum <= bitNum + 1;
			cycleStep <= 0;
		end
		if(bitNum == 9) begin
			rxBegin <= 0;
			rxStart <= 0;
			mode <= 2;
			cycleStep <= 0;
			bitNum <= 0;
			rDONE <= 1;
		end
	end

	////////////////////////////////////////////////////////////////
	// transmit
	////////////////////////////////////////////////////////////////

	if(mode == 1 && txBegin==0) begin
		tx <= 1;
		txBegin <= 1;
	end
	if(txBegin && !txStart) begin
		if(cycleStep == cycle) begin
			cycleStep <= 0;
			txStart <= 1;
		end
	end
	if(txBegin && txStart) begin
		if(cycleStep == cycle) begin
			tx <= tDP[bitNum];
			bitNum <= bitNum + 1;
			cycleStep <= 0;
		end
		if(bitNum == 9) begin
			txBegin <= 0;
			txStart <= 0;
			mode <= 2;
			cycleStep <= 0;
			bitNum <= 0;
			tDONE <= 1;
		end
	end
end

endmodule
