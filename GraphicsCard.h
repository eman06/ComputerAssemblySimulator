#pragma once
#include<iostream>
#include<cstring>
/*motherboard composes graphics card and is 
associated with cpu in non apple devices whereas 
in apple devices the applegpu is diretctly connected onto the cpu

Applegpu class will inherit graphicscard where it will overwrite 
*/
class GraphicsCard
{
private:
	int  memorySize;
	double price;
protected:
	std::string brand;
public:
	GraphicsCard();
	virtual std::string getbrand();
	void setbrand(std::string b);
	int getmemorysize();
	void setmemorysize(int ms);
	double getprice();
	void setprice(double p);
	friend std::istream& operator>>(std::istream& input, GraphicsCard& gpu) {
		// Read memorySize, price, and brand from the input stream
		input >> gpu.memorySize >> gpu.price >> gpu.brand;
		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const GraphicsCard& gpu) {
		output << "Brand: " << gpu.brand << std::endl;
		output << "Memory Size: " << gpu.memorySize << "GB" << std::endl;
		output << "Price: $" << gpu.price << std::endl;
		return output;
	}
};
/*
* in main hmm
if (cpuType == "Apple") {
		cpu = new CPU("Apple");
		gpu = nullptr; // No separate GPU for Apple devices
	} else {
		cpu = new CPU(cpuType);
		gpu = new GraphicsCard(gpuBrand);
	}
*/

