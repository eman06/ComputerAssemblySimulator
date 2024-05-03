#include "MainMemory.h"
MainMemory::MainMemory()
{
	capacity = 0;
	technologyType = "";
}
MainMemory::MainMemory(int c, std::string tt)
{
	capacity = c;
	technologyType = tt;
}
int MainMemory::getcapacity()
{
	return capacity;
}
void MainMemory::setcapcity(int c)
{
	capacity = c;
}
std::string MainMemory::gettechtype()
{
	return technologyType;
}
void MainMemory::settechtype(std::string tt)
{
	technologyType = tt;
}
