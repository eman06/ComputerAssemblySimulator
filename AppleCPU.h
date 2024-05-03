#pragma once
#include"CPU.h"
#include"AppleGPU.h"
//gpu aggregated with cpu
class AppleCPU: public CPU
{
protected:
	AppleGPU apple_gpu;
public:
	std::string gettype() const;
	AppleGPU getapple_gpu();
	void setapple_gpu(AppleGPU apg);

};

