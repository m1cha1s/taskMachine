`timescale 1ns / 1ps

module vgaDriver(clk, medClk, color, vSync, hSync, pAddr, pDin, pDout, we);
input clk, medClk;
output reg [7:0] color;
output vSync, hSync;
input [5:0] pAddr;
input [7:0] pDin;
output reg [7:0] pDout;
wire endOfFrame;
input we;
reg visible, hSync, vSync;
reg [9:0] hCounter;
reg [9:0] vCounter;
wire vwe;

reg [31:0] vBuff [3:0];

reg [12:0] vAddr;

wire vclk;

assign endOfFrame = visible ? 0 : 1;

reg [1:0] cnter = 0;
always @(posedge clk) cnter <= cnter + 1;

assign vclk = cnter[1];

always @(negedge vclk) begin
	if(hCounter < 799) begin
		hCounter <= hCounter + 1;
	end
	else begin
		hCounter <= 0;
		if(vCounter < 524) begin
			vCounter <= vCounter + 1;
		end
		else begin
			vCounter <= 0;
		end
	end
	
	if(hCounter < 640 && vCounter < 480) visible <= 1; else visible <= 0;
	if(hCounter < 752	 && hCounter > 656) hSync <= 0; else hSync <= 1;
	if(vCounter < 492 && vCounter > 490) vSync <= 0; else vSync <= 1;
end	

reg [1:0] vBuffAddr = 0;
reg [7:0] x1=0, x2=0, y1=0, y2=0;
reg [7:0] nextColor=0;

always @(negedge medClk) begin
	if(~visible)begin
		vBuff[vBuffAddr][7:0] <= x1;
		vBuff[vBuffAddr][15:8] <= y1;
		vBuff[vBuffAddr][23:16] <= x2;
		vBuff[vBuffAddr][31:24] <= y2;
	end
	if(pAddr == 14 && we == 0) pDout <= endOfFrame;
	if(pAddr == 14 && we) nextColor <= pDin;
	if(pAddr == 15 && we) x1 <= pDin;
	if(pAddr == 16 && we) y1 <= pDin;
	if(pAddr == 17 && we) x2 <= pDin;
	if(pAddr == 18 && we) y2 <= pDin;
	if(pAddr == 19 && we) vBuffAddr <= pDin;
	
end

always @(posedge vclk) begin
	if(hCounter > vBuff[0][7:0]*4 && hCounter < vBuff[0][23:16]*4 && vCounter > vBuff[0][15:8]*4 && vCounter < vBuff[0][31:24]*4 || hCounter > vBuff[1][7:0]*4 && hCounter < vBuff[1][23:16]*4 && vCounter > vBuff[1][15:8]*4 && vCounter < vBuff[1][31:24]*4 || hCounter > vBuff[2][7:0]*4 && hCounter < vBuff[2][23:16]*4 && vCounter > vBuff[2][15:8]*4 && vCounter < vBuff[2][31:24]*4 || hCounter > vBuff[3][7:0]*4 && hCounter < vBuff[3][23:16]*4 && vCounter > vBuff[3][15:8]*4 && vCounter < vBuff[3][31:24]*4) color <= nextColor; else color <= 0;
end




endmodule
