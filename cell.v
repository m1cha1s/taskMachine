`timescale 1ns / 1ps

module cell(fastClk, vgaData);
input fastClk;
output [9:0] vgaData;
wire [22:0] pData;
wire [17:0] cData;
wire [14:0] rData;

ccPer controller(.fastClk(fastClk), .pData(pData), .cData(cData), .rData(rData));
core core(.fastClk(fastClk), .pData(pData), .cData(cData), .rData(rData));
aluPer alu(.fastClk(fastClk), .pData(pData));
vgaPer vga(.fastClk(fastClk), .pData(pData), .vgaData(vgaData));

endmodule
