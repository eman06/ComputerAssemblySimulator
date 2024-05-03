#include "MotherBoard.h"
MotherBoard::MotherBoard() : mm(), ports(),  cpu(), ram() {}
MotherBoard::MotherBoard(MainMemory* mm, Port* ports, CPU* c, PhysicalMemory ram)
{
	this->mm = mm;
	this->ports = ports;
	cpu = c;
	this->ram = ram;
}
MainMemory* MotherBoard::getMainMemory()
{
	MainMemory* mm = new MainMemory;
	return mm;
}
void MotherBoard:: setMainMemory(MainMemory* mm)
{
	
	this->mm = mm;
}
void MotherBoard::setPorts(Port* ports) {
	this->ports = ports;
}
Port* MotherBoard::getPorts()
{
	Port* ports = new  Port;
	return ports;
}
MotherBoard::~MotherBoard() {
	
	delete mm; 
	delete ports; 
}
