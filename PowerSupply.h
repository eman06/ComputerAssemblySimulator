#pragma once
#include<iostream>
#include<cstring>
class PowerSupply
{
private:
	int wattage;
	std::string efficiencyRating;
	double price;
public:
	PowerSupply();
	int getwattage();
	void setwattage(int w);
	std::string getefficiencyrate();
	void setefficiencyrate(std::string er);
	double getprice();
	void setprice(double p);
	friend std::istream& operator>>(std::istream& input, PowerSupply& ps) {
		// Read data for PowerSupply object from input stream
		input >> ps.wattage >> ps.efficiencyRating >> ps.price;
		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const PowerSupply& ps) {
		output << "Wattage: " << ps.wattage << "W, Efficiency Rating: " << ps.efficiencyRating << ", Price: $" << ps.price;
		return output;
	}
};

