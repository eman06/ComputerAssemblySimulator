#pragma once
#include<iostream>

#include<cstring>
class NetworkCard
{
private:
	std::string type;
	int speed;
	double price;
public:
	NetworkCard();
	std::string gettype();
	void settype(std::string t);
	int getspeed();
	void setspeed(int s);
	double getprice();
	void setprice(double p);
	friend std::istream& operator>>(std::istream& input, NetworkCard& card) {
		// Read data for NetworkCard object from input stream
		input >> card.type >> card.speed >> card.price;
		return input;
	}
};

