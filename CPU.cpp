#include "CPU.h"

CPU::CPU() : alu(new ALU()), cu(new ControlUnit()){}//default constructorr

CPU::CPU(ALU* a, ControlUnit* c)
{
	alu = a;
	cu = c;
}
ALU* CPU::getalu()
{
	ALU* alu = new ALU;
	return alu;
}
void CPU::setalu(ALU* a)
{
	delete alu;
	alu = a;
}
ControlUnit* CPU::getcontrolunit()
{
	CPU* cpu = new CPU;
	return cu;
}
void CPU::setcontrlunit(ControlUnit* c)
{
	delete cu;
	cu = c;
}
std::string CPU::gettype ()
{
	return type;
}
void CPU::settype(std::string t)
{
	type = t;
}
