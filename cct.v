`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:28:34 04/09/2020
// Design Name:   coreController
// Module Name:   D:/ISE/projects/sdCardTest/cct.v
// Project Name:  sdCardTest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: coreController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cct;

	// Inputs
	reg clk;

	// Outputs
	wire [7:0] seg;
	wire [2:0] en;

	// Instantiate the Unit Under Test (UUT)
	coreController uut (
		.cin(clk), 
		.seg(seg),
		.en(en)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   
	always begin
		clk <= 1;
		#1;
		clk <= 0;
		#1;
	end
	
endmodule

