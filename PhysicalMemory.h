#pragma once
#include<iostream>
/*
physical memory like cpu, is installed onto the motherboard for its wroking
class Compuer will be AGGREGATED with physical memory later on
*/
class PhysicalMemory
{
protected:
	int capacity;
public:	
	PhysicalMemory();
	PhysicalMemory(int cap);
	int getcap();
	void setcap(int cap);
	friend std::istream& operator>>(std::istream& input, PhysicalMemory& pm) {
		// Read data for PhysicalMemory object from input stream
		input >> pm.capacity;
		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const PhysicalMemory& pm) {
		output << "Capacity: " << pm.capacity << std::endl;
		return output;
	}
};

