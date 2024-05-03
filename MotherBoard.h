#pragma once
/*
1.here mother board is AGGREGATED with main memory
2.it is COMPOSED of ports
3.we create an AGGREGATION relationship between cpu,physical memory and motherboard because
CPU and physical memory is installed onto the motherboard and is required for its working
*/
#include"MainMemory.h"
#include "Port.h"
#include "CPU.h"
#include "PhysicalMemory.h"
#include"GraphicsCard.h"
class MotherBoard
{
protected:
	MainMemory* mm;/*one motherboard will have only one main memory but we tend to use a pointer
				   because in this plan memory will be dynamically allocated during run time*/
	Port* ports;/*using pointer for ports to handle multiple number of ports in diff pc/ mac */

	CPU* cpu;//it has control unit and alu
	PhysicalMemory ram;//it has capcity
	GraphicsCard* gcu;/*motherboard composes graphics card and is 
						associated with cpu in non apple devices*/

public:
	MotherBoard();
	MotherBoard(MainMemory* mm, Port* ports, CPU* c, PhysicalMemory ram);
	MainMemory* getMainMemory();
	void setMainMemory(MainMemory* mm);
	Port* getPorts();
	void setPorts(Port* ports);
	~MotherBoard();
	/*no getters and setters for cpu and physical memory because we require cpu
	and physical memory for installation and working
	of motherboard but they should not be modified using motherboard*/
	friend std::istream& operator>>(std::istream& input, MotherBoard& motherboard) {
		// Input MainMemory object
		motherboard.mm = new MainMemory();
		input >> *(motherboard.mm);

		// Input Port object
		motherboard.ports = new Port();
		input >> *(motherboard.ports);

		// Input CPU object
		motherboard.cpu = new CPU();
		input >> *(motherboard.cpu);

		// Input PhysicalMemory object
		input >> motherboard.ram;

		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const MotherBoard& motherboard) {
		output << "Main Memory: " << *(motherboard.mm) << std::endl;
		output << "Ports: " << *(motherboard.ports) << std::endl;
		output << "CPU: " << *(motherboard.cpu) << std::endl;
		output << "Physical Memory: " << motherboard.ram << std::endl;
		return output;
	}
};


