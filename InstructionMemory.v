`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:14:18 11/08/2016 
// Design Name: 
// Module Name:    InstructionMemory 
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
module InstructionMemory(
    input [31:0] address,
    output [31:0] instruction
    );
	
	reg[7:0] instructions[0:255];
	
	initial begin
		$readmemb("instructions_binary.txt", instructions);
	end
	
	assign instruction[31:24] = instructions[address];
	assign instruction[23:16] = instructions[address + 1];
	assign instruction[15:8] = instructions[address + 2];
	assign instruction[7:0] = instructions[address + 3];

endmodule
