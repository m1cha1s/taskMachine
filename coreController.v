`timescale 1ns / 1ps

module coreController(cin);
input wire cin;
wire fastClk;
wire slowClk;
wire cin2;

reg medClk = 0;
reg cntr = 0;
reg [15:0] cycle = 2;
always @(posedge fastClk) cntr <= cntr + 1;
always @(posedge cntr) medClk <= ~medClk;

wire [1:0] coreComBus;

wire [1:0] arag [1:0];

wire [25:0] rData_port [1:0];

wire [15:0] romAddr;
wire [7:0] romData;

diskAccessController dAC(.medClk(medClk), .romAddr(romAddr), .romData(romData), .rData_port_0(rData_port[0]), .rData_port_1(rData_port[1]));
ccbAccessController cAC(.fastClk(fastClk), .arag_1(arag[0]), .arag_2(arag[1]));

coreSet_001 cs_0(.fastClk(fastClk), .slowClk(slowClk), .rData(rData_port[0]), .portBus(coreComBus[0]), .dataBus(coreComBus[1]), .arag(arag[0]), .cycle(cycle));
coreSet_001 cs_1(.fastClk(fastClk), .slowClk(slowClk), .rData(rData_port[1]), .portBus(coreComBus[0]), .dataBus(coreComBus[1]), .arag(arag[1]), .cycle(cycle));


rom001 r001(.clka(fastClk), .addra(romAddr), .douta(romData));
clk c(.CLKIN_IN(cin), .RST_IN(0), .CLKFX_OUT(fastClk), .CLK0_OUT(slowClk));
endmodule 