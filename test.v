`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:34:31 05/06/2020
// Design Name:   coreController
// Module Name:   D:/ISE/projects/sdCardTest/test.v
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

module test;

	// Inputs
	reg cin;

	// Outputs
	wire [9:0] vgaData;

	// Instantiate the Unit Under Test (UUT)
	coreController uut (
		.cin(cin), 
		.vgaData(vgaData)
	);

	initial begin
		// Initialize Inputs
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always begin
		cin <= 1;
		#1;
		cin <= 0;
		#1;
	end
      
endmodule

