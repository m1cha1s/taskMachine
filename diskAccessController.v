`timescale 1ns / 1ps

module diskAccessController(medClk, romAddr, romData, rData_port_0, rData_port_1);
input wire medClk;
output wire [15:0] romAddr;
inout wire [7:0] romData;
inout wire [25:0] rData_port_0;
inout wire [25:0] rData_port_1;

wire [1:0] ar;

assign ar[0] = rData_port_0[24];
assign ar[1] = rData_port_1[24];

reg [1:0] ag = 0;

assign rData_port_0[25] = ag[0];
assign rData_port_1[25] = ag[1];

assign romAddr = ag[0] ? rData_port_0[23:8] : 16'dZ;
assign romAddr = ag[1] ? rData_port_1[23:8] : 16'dZ;
assign rData_port_0[7:0] = ag[0] ? romData : 8'dZ;
assign rData_port_1[7:0] = ag[1] ? romData : 8'dZ;

reg [1:0] port_sel = 0;

always @(posedge medClk) begin
		if(ar[port_sel] == 1) begin
			ag[port_sel] <= 1;
		end
		else begin
			ag[port_sel] <= 0;
		end
end

always @(negedge medClk) if(ag == 2'b0) port_sel <= port_sel + 1;

endmodule
