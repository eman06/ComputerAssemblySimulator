#include "Battery.h"
Battery::Battery()
{
	capacity = 0;
}
int Battery::getcapacity()
{
	return capacity;
}
void Battery::setcapacity(int c)
{
	capacity = c;
}