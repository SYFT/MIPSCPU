`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:45:58 11/09/2016 
// Design Name: 
// Module Name:    ProgramCounter 
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
module ProgramCounter(
    input reset,
    input PCWre,
    input GOE,
    input [31:0] outsidePC,
    input [31:0] nextPC,
    output reg [31:0] PC,
	input clk
    );
	
	parameter ZERO = 0;
	
	reg [31:0] _PC;
	always @(*)
		_PC <= PCWre ? nextPC : PC;
	
	always @(posedge clk or posedge reset or posedge GOE)
		if(reset) PC <= {32{1'b0}};
		else if(~GOE) PC <= outsidePC;
		else PC <= _PC;


endmodule
