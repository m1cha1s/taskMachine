`timescale 1ns / 1ps

module bin8BitDisplay(data, display);

input [7:0] data;
output [7:0] display;

assign display = data;

endmodule
