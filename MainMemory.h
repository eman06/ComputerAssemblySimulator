#pragma once
#include <iostream>
#include <string>
class MainMemory
{
	int capacity;
	std::string technologyType;//(Possible values: Semiconductor, Silicon)
public:
	MainMemory();
	MainMemory(int c, std::string tt);
	int getcapacity();
	void setcapcity(int c);
	std::string gettechtype();
	void settechtype(std::string tt);
	friend std::istream& operator>>(std::istream& input, MainMemory& memory) {
		
		input >> memory.capacity >> memory.technologyType;
		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const MainMemory& memory) {
		output << "Capacity: " << memory.capacity << "GB" << std::endl;
		output << "Technology Type: " << memory.technologyType << std::endl;
		return output;
	}
};

