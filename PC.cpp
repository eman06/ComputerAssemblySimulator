#include "PC.h"

PC::PC(const std::string& version, const std::string& cpu)
    : windowsVersion(version), processor(cpu) {}

PC::PC() : windowsVersion(""), processor("Apple") {}

