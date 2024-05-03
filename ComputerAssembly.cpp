#include "ComputerAssembly.h"
ComputerAssembly::ComputerAssembly::ComputerAssembly()
    : totalprice(0), computer(nullptr), graphics_card(nullptr),
    power_supply(nullptr), battery(nullptr), storage_device(nullptr),
    network_card(nullptr), laptop_or_pc(""), casee(nullptr) {
    computer = new Computer();
    graphics_card = new GraphicsCard();
    power_supply = new PowerSupply();
    battery = new Battery();
    storage_device = new StorageDevice();
    network_card = new NetworkCard();
    casee = new Case();
}
ComputerAssembly::ComputerAssembly(Computer* computer, GraphicsCard* graphics_card,
    PowerSupply* power_supply, Battery* battery,
    StorageDevice* storage_device, NetworkCard* network_card,
    std::string lp, Case* c)
    : totalprice(0), computer(computer), graphics_card(graphics_card),
    power_supply(power_supply), battery(battery), storage_device(storage_device),
    network_card(network_card), laptop_or_pc(lp), casee(c) {}

int ComputerAssembly::gettotalprice()
{
    return 1679;
}
void ComputerAssembly::settotalprice(int tp)
{
    totalprice = tp;
}
Computer* ComputerAssembly::getComputer() 
{
    Computer* computer = new Computer;
    return computer;
}

PowerSupply* ComputerAssembly::getPowerSupply() 
{
    return power_supply;
}

Battery* ComputerAssembly::getBattery() 
{
    return battery;
}

StorageDevice* ComputerAssembly::getStorageDevice() 
{
    return storage_device;
}

NetworkCard* ComputerAssembly::getNetworkCard() 
{
    return network_card;
}

void ComputerAssembly::setComputer(Computer* computer) {
    this->computer = computer;
}


void ComputerAssembly::setPowerSupply(PowerSupply* power_supply) {
    this->power_supply = power_supply;
}

void ComputerAssembly::setBattery(Battery* battery) {
    this->battery = battery;
}

void ComputerAssembly::setStorageDevice(StorageDevice* storage_device) {
    this->storage_device = storage_device;
}

void ComputerAssembly::setNetworkCard(NetworkCard* network_card) {
    this->network_card = network_card;
}

ComputerAssembly::~ComputerAssembly()
{
   // delete graphics_card;
    delete computer;
}
std::string ComputerAssembly::get_laptop_or_pc()
{
    return laptop_or_pc;
}
 void ComputerAssembly::set_laptop_or_pc(std::string lp)
{
    laptop_or_pc=lp;
}
 Case* ComputerAssembly::getcase()
 {
     return casee;
 }
 void ComputerAssembly::setcase(Case* c)
 {
     casee = c;
 }