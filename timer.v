`timescale 1ns / 1ps

module timer(clk, cutoff, clk2);
input clk;
output clk2;
input [63:0] cutoff;

wire clk2;

reg [63:0] div1;
reg div2;

always @(posedge clk) begin
	if(div1 == cutoff) begin
		div1 <= 0;
		div2 <= ~div2;
	end
	else div1 <= div1 + 1;
end

assign clk2 = div2;

endmodule
