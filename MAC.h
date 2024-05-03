#pragma once
#include"ComputerAssembly.h"
#include"AppleCPU.h"
class MAC: public  ComputerAssembly
{
private:
    std::string macOSVersion;
    bool hasTouchBar;
    bool hasRetinaDisplay;
    bool usesAppleSilicon;
   // std::string cpu_type;
    AppleCPU apple_cpu;
public:
    MAC();
    MAC(const std::string& version, bool touchBar, bool retinaDisplay, bool appleSilicon);
    std::string getcputype();
    AppleCPU get_apple_cpu();
    
    void set_apple_cpu(AppleCPU applecpu);
    void print() 
    {
        ComputerAssembly::print_computerass(); // Call the base class print function
       cout<< "macOS Version: " << macOSVersion << std::endl;
        cout << "Has Touch Bar: " << (hasTouchBar ? "Yes" : "No") << std::endl;
       cout << "Has Retina Display: " << (hasRetinaDisplay ? "Yes" : "No") << std::endl;
        cout << "Uses Apple Silicon: " << (usesAppleSilicon ? "Yes" : "No") << std::endl;
        cout << "Apple CPU Details: " << std::endl << apple_cpu << std::endl;
    }
};

