`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:24:53 04/08/2020
// Design Name:   coreController
// Module Name:   D:/ISE/projects/sdCardTest/ccTest.v
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

module ccTest;

	// Inputs
	reg clk;
	reg [7:0] bus;
	reg [7:0] pinBus;

	// Outputs
	wire [15:0] addr;
	wire [5:0] pAddr;
	wire [7:0] poutBus;
	wire [1:0] we1;

	// Instantiate the Unit Under Test (UUT)
	coreController uut (.cin(clk), .vgaData, seg, en);

	initial begin
		// Initialize Inputs
		clk = 0;
		bus = 0;
		pinBus = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   
	always begin
		clk <= 1;
		#10;
		clk <= 0;
		#10;
	end
	
endmodule

