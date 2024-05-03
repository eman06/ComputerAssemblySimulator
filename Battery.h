#pragma once
#include<iostream>
class Battery
{
private:
	int capacity;
public:
	Battery();
	int getcapacity();
	void setcapacity(int c);
	friend std::istream& operator>>(std::istream& input, Battery& battery) {
		// Read data for Battery object from input stream
		input >> battery.capacity;
		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const Battery& battery) {
		// Write data for Battery object to output stream
		output << "Capacity: " << battery.capacity << " mAh";
		return output;
	}
};









