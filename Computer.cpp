
#include "Computer.h"

Computer::Computer(): m(),pm(),c(){}
Computer::Computer(MotherBoard M, PhysicalMemory PM, CPU C):m(M), pm(PM), c(C) {}
MotherBoard& Computer::getMotherBoard() 
{
	return m;
}

PhysicalMemory& Computer::getPhysicalMemory()
{
	return pm;
}

CPU& Computer::getCPU() 
{
	return c;
}
void Computer::setMotherBoard(const MotherBoard& newMotherBoard)
{
    m = newMotherBoard;
}

void Computer::setPhysicalMemory(const PhysicalMemory& newPhysicalMemory)
{
    pm = newPhysicalMemory;
}

void Computer::setCPU(const CPU& newCPU)
{
    c = newCPU;
}