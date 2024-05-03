#include "PhysicalMemory.h"
PhysicalMemory::PhysicalMemory()
{
	capacity = 0;
}
PhysicalMemory::PhysicalMemory(int cap)
{
	capacity = cap;
}
int PhysicalMemory::getcap()
{
	return capacity;
}
void PhysicalMemory::setcap(int cap)
{
	capacity = cap;
}