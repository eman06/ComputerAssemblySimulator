#include "Port.h"
#include<string>
Port::Port()
{
	type = "";
	baud_rate = 0;
}
Port::Port(std::string t, int br)
{
	type = t;
	baud_rate = br;
}
std::string Port::gettype()
{
	return type;
}
void Port::settype(std::string t)
{
	type = t;
}
int Port::getbrate()
{
	return baud_rate;
}
void Port::setbrate(int br)
{
	baud_rate = br;
}
