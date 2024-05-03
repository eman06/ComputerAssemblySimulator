#include "ControlUnit.h"
ControlUnit::ControlUnit()
{
	clock = 0;
}
ControlUnit::ControlUnit(int c)
{
	clock = c;
}
float ControlUnit::getclock()
{
	return clock;
}
void ControlUnit::setclock(float c)
{
	clock = c;
}
