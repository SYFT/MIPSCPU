`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:36:07 11/08/2016 
// Design Name: 
// Module Name:    Register 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module Register(
    input [4:0] readA,
    input [4:0] readB,
    input [4:0] writeDst,
    input [31:0] writeData,
    input regWrite,
    output [31:0] out1,
    output [31:0] out2,
    input clk
    );
	
	reg [31:0] regs[0:31];
	
	initial begin
		regs[0] <= 0;
		regs[8] <= 0;
		regs[9] <= 0;
	end
	
	assign out1 = regs[readA];
	assign out2 = regs[readB];
	
	always @(negedge clk) begin
		if(writeDst && regWrite) regs[writeDst] <= writeData;
	end

endmodule
