#include "ALU.h"
ALU::ALU()
{
	NoOfAdders = 0;
	NoOfSubtractor =0;
	NoOfRegisters =0;
	sizeOfRegisters =0;
}
ALU::ALU(int nadd, int nsub, int nreg, int sizereg)
{
	NoOfAdders =nadd ;
	NoOfSubtractor =nsub ;
	 NoOfRegisters =nreg;
	sizeOfRegisters= sizereg ;
}
int ALU::getadd()
{
	return NoOfAdders;
}
void ALU::setadd(int NoOfAdders)
{
	this->NoOfAdders = NoOfAdders;
}
int ALU::getsub()
{
	return NoOfSubtractor;
}
void ALU::setsub(int NoOfSubtractor)
{
	this->NoOfSubtractor = NoOfSubtractor;
}
int ALU::getreg()
{
	return NoOfRegisters;
}
void ALU::setreg(int NoOfRegisters)
{
	this->NoOfRegisters = NoOfRegisters;
}
int ALU::getsizereg()
{
	return sizeOfRegisters;
}
void ALU::setsizereg(int sizeOfRegisters)
{
	this->sizeOfRegisters = sizeOfRegisters;
}
