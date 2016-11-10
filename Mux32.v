`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:43:56 11/09/2016 
// Design Name: 
// Module Name:    Mux32 
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
module Mux32(
    input sel,
    input [31:0] inA,
    input [31:0] inB,
    output [31:0] out
    );
	
	assign out = sel ? inB : inA;

endmodule
