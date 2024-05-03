#pragma once
#include<iostream>
class ALU
{
private:
	int NoOfAdders;
	int NoOfSubtractor;
	int NoOfRegisters;
	int	sizeOfRegisters;
public:
	ALU();//default
	ALU(int nadd , int nsub,int nreg,int sizereg);
	int getadd();
	void setadd(int NoOfAdders);
	int getsub();
	void setsub(int NoOfSubtractor);
	int getreg();
	void setreg(int NoOfRegisters);
	int getsizereg();
	void setsizereg(int sizeOfRegisters);
	friend std::istream& operator>>(std::istream& input, ALU& alu) {
		// Read data for NoOfAdders, NoOfSubtractor, NoOfRegisters, and sizeOfRegisters
		input >> alu.NoOfAdders >> alu.NoOfSubtractor >> alu.NoOfRegisters >> alu.sizeOfRegisters;
		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const ALU& alu) {
		output << "NoOfAdders: " << alu.NoOfAdders << ", ";
		output << "NoOfSubtractor: " << alu.NoOfSubtractor << ", ";
		output << "NoOfRegisters: " << alu.NoOfRegisters << ", ";
		output << "sizeOfRegisters: " << alu.sizeOfRegisters;
		return output;
	}
};

