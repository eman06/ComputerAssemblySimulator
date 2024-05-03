#pragma once
#include<iostream>
#include<cstring>
class StorageDevice
{
private:
	std::string type;
	int capacity;
	double price;
public:
	StorageDevice();
	std::string gettype();
	void settype(std::string t);
	int getcapacity();
	void setcapacity(int c);
	double getprice();
	void setprice(double p);
	friend std::istream& operator>>(std::istream& input, StorageDevice& device) {
		// Read data for StorageDevice object from input stream
		input >> device.type >> device.capacity >> device.price;
		return input;
	}
	
};

