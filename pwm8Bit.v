`timescale 1ns / 1ps

module pwm8Bit(clk, value, pwm);

input clk;
input [7:0] value;
output reg pwm;

reg [7:0] counter;

always @(posedge clk) begin 
	counter <= counter + 1;
	if(counter < value) pwm <= 1;
	else pwm <= 0;
end
endmodule
