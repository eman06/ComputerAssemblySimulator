#pragma once
#include<iostream>
class ControlUnit
{
	float clock;
public:
	ControlUnit();
	ControlUnit(int c);
	float getclock();
	void setclock(float c);
	friend std::istream& operator>>(std::istream& input, ControlUnit& cu) {
		// Read clock from the input stream
		input >> cu.clock;
		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const ControlUnit& cu) {
		output << "Clock: " << cu.clock << std::endl;
		return output;
	}
};

