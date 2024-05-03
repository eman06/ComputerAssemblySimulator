#pragma once
#include "ComputerAssembly.h"
class PC: public ComputerAssembly
{
private:
    std::string windowsVersion;
    std::string const processor;
    
public:
    PC(const std::string& version, const std::string& cpu);
    PC();

    void print(std::ostream& output) 
    {
        ComputerAssembly::print_computerass(); // Call the base class print function
        cout<< "Windows Version: " << windowsVersion << std::endl;
       cout<< "Processor: " << processor << std::endl;
    }
};

