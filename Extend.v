`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:10:21 11/08/2016 
// Design Name: 
// Module Name:    Extend 
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
module Extend(
    input [15:0] in,
    input extCtrl,
    output [31:0] out
    );
	
	assign out = extCtrl ? {{16{1'b0}}, in[15:0]} : {{16{in[15]}}, in[15:0]};


endmodule
