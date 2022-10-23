`timescale 1ns / 1ps

module ram8x64(we, addr, din, dout);
input we;
input [5:0] addr;
input [7:0] din;
output [7:0] dout;

reg [7:0] mem [63:0];

always begin
	if(we) begin
		mem[addr] <= din;
	end
end

assign dout = mem[addr];

endmodule
