#include "GraphicsCard.h"
GraphicsCard::GraphicsCard()
{
	brand="";
	memorySize=0;
	price=0;
}
std::string GraphicsCard::getbrand()
{
	return brand;
}
void GraphicsCard::setbrand(std::string b)
{
	brand = b;
}
int GraphicsCard::getmemorysize()
{
	return memorySize;
}
void GraphicsCard::setmemorysize(int ms)
{
	memorySize = ms;
}
double GraphicsCard::getprice()
{
	return price;
}
void GraphicsCard::setprice(double p)
{
	price = p;
}
