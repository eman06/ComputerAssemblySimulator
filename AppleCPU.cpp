#include "AppleCPU.h"

std::string AppleCPU::gettype() const 
{
	return "Apple";
};
AppleGPU AppleCPU::getapple_gpu()
{
	return apple_gpu;
}
void AppleCPU::setapple_gpu(AppleGPU apg)
{
	apple_gpu = apg;
}