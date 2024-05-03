#pragma once
#include<iostream>
#include "ALU.h"
#include "ControlUnit.h"
/*
1.CPU is "COMPOSED" of ALU and control unit
2.when cpu is created both alu and cu are created from memory
3.when cpu is deleted both alu and cu are deleted
4.we create an assocition relationship between cpu and motherboard because
 CPU is installed onto the motherboard and is required for its working
*/
class CPU
{
private:
	ALU* alu;
	ControlUnit* cu;
protected:
	std::string type;
public:
	CPU();
	CPU(ALU* a, ControlUnit* c);
	ALU* getalu();
	void setalu(ALU* a);
	ControlUnit* getcontrolunit();
	void setcontrlunit(ControlUnit* c);
	std::string gettype();
	void settype(std::string t);
	friend std::istream& operator>>(std::istream& input, CPU& cpu) {
		
		input >> cpu.type;

		// Read ALU and ControlUnit objects
		cpu.alu = new ALU();
		input >> *(cpu.alu);

		cpu.cu = new ControlUnit();
		input >> *(cpu.cu);

		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const CPU& cpu) {
		output << "CPU Type: " << cpu.type << std::endl;
		output << "ALU: " << *(cpu.alu) << std::endl;
		output << "Control Unit: " << *(cpu.cu) << std::endl;
		return output;
	}
};

