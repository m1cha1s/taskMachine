`timescale 1ns / 1ps

module vRam(clk, addr, din, dout, we);
input clk, we;
input [15:0] addr;
input [7:0] din;
output reg [7:0] dout;

reg [7:0] memory [30000:0];

always @(negedge clk)

	if(we)begin
		memory[addr] <= din;
	end
	else begin
		dout <= memory[addr];
	end

endmodule
