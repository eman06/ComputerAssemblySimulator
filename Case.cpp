#include "Case.h"
Case::Case()
{
	formFactor = "";
	color = "";
}
std::string Case::getformFactor()
{
	return formFactor;
}
void Case::setformFactor(std::string ff)
{
	formFactor = ff;
}
std::string Case::getcolor()
{
	return color;
}
void Case::setcolor(std::string c)
{
	color = c;
}