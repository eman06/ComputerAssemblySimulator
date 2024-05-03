#include "MAC.h"


MAC::MAC(const std::string& version, bool touchBar, bool retinaDisplay, bool appleSilicon)
    : macOSVersion(version), hasTouchBar(touchBar), hasRetinaDisplay(retinaDisplay),
    usesAppleSilicon(appleSilicon) {}


MAC::MAC() : macOSVersion(""), hasTouchBar(false), 
hasRetinaDisplay(false), usesAppleSilicon(false)  {}
std::string MAC:: getcputype()
{
    return "Apple";
}
AppleCPU MAC::get_apple_cpu()
{
    return apple_cpu;
}
void  MAC :: set_apple_cpu(AppleCPU applecpu)
{
    apple_cpu = applecpu;
}

