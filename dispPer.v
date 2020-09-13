`timescale 1ns / 1ps

module dispPer(fastClk, slowClk, pData, seg, en);
input fastClk, slowClk;
inout [22:0] pData;
output [7:0] seg;
output [2:0] en;

reg [7:0] value = 0;
always @(negedge fastClk) begin
	if(pData[21:16] == 10) if(pData[22] == 1) begin
		value <= pData[7:0];
	end
end
hex27segX3 disp(.clk(slowClk), .binInt(value), .seg(seg), .en(en));

endmodule
