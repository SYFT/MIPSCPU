`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:02:22 11/08/2016 
// Design Name: 
// Module Name:    DataMemory 
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
module DataMemory(
    input [31:0] address,
    input [31:0] writeData,
    input memRead,
    input memWrite,
    input clk,
    output reg [31:0] out
    );
	
	reg[7:0] memory[0:255];

	always @(negedge clk or memRead)
		if(memRead) begin
			out[31:24] <= memory[address];
			out[23:16] <= memory[address + 1];
			out[15:8] <= memory[address + 2];
			out[7:0] <= memory[address + 3];
		end
	
	always @(posedge clk or memWrite)
		if(memWrite) begin
			memory[address] <= writeData[31:24];
			memory[address + 1] <= writeData[23:16];
			memory[address + 2] <= writeData[15:8];
			memory[address + 3] <= writeData[7:0];
		end


endmodule
