`timescale 1ns / 1ps

module gpio(clk, in, out, pIn, pOut);
input [7:0] out, pIn;
output reg [7:0] in, pOut;
input clk;

always @(negedge clk) begin
	in <= pIn;
	pOut <= out;
end

endmodule
