`timescale 1ns / 1ps
`include "hex27segX3.v"

module main(clk, seg, en);
input clk;

output [7:0] seg;
output [2:0] en;

wire [10:0] addr;
wire [7:0] data;

coreController cc1(.clk(clk), .addr(addr), .bus(data));

reg [7:0] rom [63:0];

always @(posedge clk) begin
	rom[0] <= 8'b00000010;
	rom[1] <= 8'b11000000;
	rom[2] <= 123;
end

assign data = rom[addr];

endmodule
