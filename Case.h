#pragma once
#include<iostream>
#include<cstring>
class Case
{
private:
	std::string formFactor;
	std::string color;
public:
	Case();
	std::string getformFactor();
	void setformFactor(std::string ff);
	std::string getcolor();
	void setcolor(std::string c);
	friend std::istream& operator>>(std::istream& input, Case& casing) {
		// Read data for Case object from input stream
		input >> casing.formFactor >> casing.color;
		return input;
	}
	

};
