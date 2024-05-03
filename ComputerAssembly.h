#pragma once
#include "Computer.h"
#include "Battery.h"
#include "StorageDevice.h"
#include"PowerSupply.h"
#include "Case.h"
#include"AppleCPU.h"
#include"AppleCPU.h"
#include "NetworkCard.h"
using std::cout;
/*
here,
1. it COMPOSES computer class, graphics card class, power supply class, battery class
2. it is AGGREGATED of storage device, network card class and case class
3. these relationships are developed according to the significance of existence of
the attributes without the existenece of computer assembly class
4. we use pointers for mere memory allocations
*/
class ComputerAssembly
{
protected:
	int totalprice;
	//compositions
	Computer* computer;
	GraphicsCard* graphics_card;
	PowerSupply* power_supply;
	Battery* battery;
	//aggregations
	StorageDevice* storage_device;
	NetworkCard* network_card;
	std::string laptop_or_pc;
	Case* casee;
public:
	ComputerAssembly();
	ComputerAssembly(Computer* computer, GraphicsCard* graphics_card,
		PowerSupply* power_supply, Battery* battery, StorageDevice* storage_device,
		NetworkCard* network_card, std::string lp, Case* c);
	int gettotalprice();
	void settotalprice(int tp);
	Computer* getComputer();
	//GraphicsCard* getGraphicsCard();
	PowerSupply* getPowerSupply();
	Battery* getBattery();
	StorageDevice* getStorageDevice();
	NetworkCard* getNetworkCard();
	std::string get_laptop_or_pc();
	void setComputer(Computer* computer);
	//void setGraphicsCard(GraphicsCard* graphics_card);
	void setPowerSupply(PowerSupply* power_supply);
	void setBattery(Battery* battery);
	void setStorageDevice(StorageDevice* storage_device);
	void setNetworkCard(NetworkCard* network_card);
	void set_laptop_or_pc(std::string lp);
	~ComputerAssembly();
	Case* getcase();
	void setcase(Case* c);
	//////////overloading inline for inputs
	friend std::istream& operator>>(std::istream& is, ComputerAssembly& assembly) {
		// Input total price
		std::cout << "Enter total price: ";
		is >> assembly.totalprice;
		is >> *(assembly.computer);
		is >> *(assembly.graphics_card);
		is >> *(assembly.power_supply);
		is >> *(assembly.battery);
		is >> *(assembly.storage_device);
		is >> *(assembly.network_card);
		return is; // Return the input stream
	}

	void print_computerass()
	{
		//all attributes and composed/aggregated elements can be peinted here
		//for inherited stuff they will be called seperately!
		cout << "\nLaptop/PC: " << get_laptop_or_pc();
		cout << "\nCapacity of storage device: " << storage_device->getcapacity();
		cout << "\ntype of storage device: " << storage_device->gettype();
		
		cout << "\nCapacity of storage device: " << storage_device->getcapacity();
		cout << "\nCapacity of storage device: " << storage_device->getcapacity();
		cout << "\nCapacity of storage device: " << storage_device->getcapacity();

	}
	
};
