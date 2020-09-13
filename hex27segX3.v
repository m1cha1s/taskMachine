`timescale 1ns / 1ps

module hex27segX3(clk, binInt, seg, en); //by Cen3mode
input clk;
input [11:0] binInt;
output [7:0] seg;
output [2:0] en;

reg [11:0] in = 12'b000000000000;



reg [1:0] cnt = 2'b00;

reg [2:0] pointer = 3'b000;
reg [3:0] frag = 4'b000;
reg [7:0] cHex = 8'b0;

reg [7:0] div1;
reg div2;
reg blanking;

always @(posedge clk) begin 
	if(div1 == 255) begin
		div1 <= 0;
		div2 <= ~div2;
	end
	else div1 <= div1 + 1;
end

always @(posedge div2) begin 
	in <= binInt;
	if(cnt==2) cnt <= 0;
	else cnt <= cnt + 1;
	case(cnt)
		2'b00:pointer <= 3'b011;
		2'b01:pointer <= 3'b110;
		2'b10:pointer <= 3'b101;
		default:pointer <= 3'b111;
	endcase
	case(cnt)
		2'b00:frag <= in[3:0];
		2'b01:frag <= in[7:4];
		2'b10:frag <= in[11:8];
		default : frag <= 4'b0000;
	endcase
	case(frag)
		4'b0000:cHex <= 8'b00000011;
		4'b0001:cHex <= 8'b10011111;
		4'b0010:cHex <= 8'b00100101;
		4'b0011:cHex <= 8'b00001101;
		4'b0100:cHex <= 8'b10011001;
		4'b0101:cHex <= 8'b01001001;
		4'b0110:cHex <= 8'b01000001;
		4'b0111:cHex <= 8'b00011011;
		4'b1000:cHex <= 8'b00000001;
		4'b1001:cHex <= 8'b00001001;
		4'b1010:cHex <= 8'b00010001;
		4'b1011:cHex <= 8'b11000001;
		4'b1100:cHex <= 8'b01100011;
		4'b1101:cHex <= 8'b10000101;
		4'b1110:cHex <= 8'b01100001;
		4'b1111:cHex <= 8'b01110001;
	endcase
end
assign en = pointer;
assign seg = cHex;

endmodule
