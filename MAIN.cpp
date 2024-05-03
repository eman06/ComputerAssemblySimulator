/*
Name: Eman Ihsan
Section: CS A
Roll no. : 23I-0530
Instructor: Sir Ali Zeeshan
TA: Muhammad Abdur Rafay
*/
/*
 url for uml diagram:
https://lucid.app/lucidchart/d4f52202-2427-4164-bb69-245d48020936/edit?view_items=sAcwxa-0G-Dy&invitationId=inv_256ebbec-0a66-4ccd-8819-6fe0e483311d
*/
#include<iostream>
#include<cstring>
#include"MAC.h"
#include "PC.h"// this refers to intel

using std::cout;
using std::cin;
using std::string;
int main()
{
	bool validity = false;
	int number_of_ports;
	int capacity_main_memory;
	string techtype_mainmemory;
	float clock_control_unit;
	int  memorySize_graphics;
	double price_graphics;
	int ram_capacity;
	std::string type_storagedevice;
	int capacity_storagedevice;
	double price_storage_device;
	string network_card_type;
	string cpu_type;
	int num_adders_alu;
	int num_sub_alu;
	int num_reg_alu;
	int  network_card_speed;
	int wattage_power_supply;
	string eff_power_supply;
	int battery_capacity;
	string lp;
	bool desktop = false;
	std::string color_case;
	std::string form_factor;
	MAC mac;//creating an obj for mac
	PC pc;
	while (!validity)
	{
		StorageDevice* Storage = new StorageDevice;//allocating memory in main for elements aggregated in computer assembly
		///////////////INPUTS
		// //first taking all inputs and then putting if statements to store those inputs in mac or pc

		cout << "type of CPU (Apple silicon or intel): ";
		cin >> cpu_type;
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "number of adders in alu: ";
		cin >> num_adders_alu;
		cout << "number of subtractors in alu: ";
		cin >> num_sub_alu;
		cout << "Capacity of Main memory: ";
		cin >> capacity_main_memory;
		cout << "Technology type of Main memory(Silicon/Semiconductor) ";
		cin >> techtype_mainmemory;
		cout << "Memory size of graphics card: ";
		cin >> memorySize_graphics;
		cout << "Price of graphics card: ";
		cin >> price_graphics;
		cout << "clock speed of control unit: ";
		cin >> clock_control_unit;
		cout << "RAM capacity: ";
		cin >> ram_capacity;
		cout << "type of storage device: ";
		cin >> type_storagedevice;
		cout << "Capacity of storage device: ";
		cin >> capacity_storagedevice;
		cout << "type of network card(Ethernet/WiFi): ";
		cin >> network_card_type;
		cout << "Speed of network card: ";
		cin >> network_card_speed;
		cout << "Wattage of Power supply: ";
		cin >> wattage_power_supply;
		cout << "Efficiency Rating of power supply: ";
		cin >> eff_power_supply;
		cout << "Battery Capacity: ";
		cin >> battery_capacity;
		cout << "Color Of Case: ";
		cin >> color_case;
		cout << "form factor of case";
		cin >> form_factor;
		cout << "is it a laptop or PC?";
		cin >> lp;
		if (lp == "PC")
		{
			desktop = true;
		}
		cout << "number of ports: ";//this should be in the end!!!!!!!!!!
		cin >> number_of_ports;
		//if cpu is of mac then to store values of all these elements path is diffirent
		if (cpu_type == "Apple Silicon")
		{
			mac.getComputer()->getCPU().settype(cpu_type);
			mac.getComputer()->getCPU().getalu()->setsizereg(64);//assumable thing for an apple cpu
			mac.getComputer()->getCPU().getalu()->setadd(num_adders_alu);
			mac.getComputer()->getCPU().getalu()->setsub(num_sub_alu);

			for (int i = 0; i < number_of_ports; i++)
			{
				//because this is a loop storing values one at a time
				cout << "Specifications for port # " << i + 1;
				cout << "\nType: ";
				string type;
				int baud_rate;
				cin >> type;
				cout << "baud rate: ";
				cin >> baud_rate;
				Port port(type, baud_rate);
				mac.getComputer()->getMotherBoard().getPorts()->settype(type);
				mac.getComputer()->getMotherBoard().getPorts()->setbrate(baud_rate);
			}
			mac.getComputer()->getMotherBoard().getMainMemory()->setcapcity(capacity_main_memory);
			if (techtype_mainmemory != "Silicon" && techtype_mainmemory != "Semiconductor")
			{
				cout << "Invalid !!!";
				validity = false;

			}
			else
			{
				mac.getComputer()->getMotherBoard().getMainMemory()->gettechtype() = techtype_mainmemory;
			}
			mac.get_apple_cpu().getapple_gpu().setmemorysize(memorySize_graphics);
			mac.get_apple_cpu().getapple_gpu().setprice(price_graphics);
			mac.getComputer()->getCPU().getcontrolunit()->setclock(clock_control_unit);
			if (mac.getComputer()->getCPU().gettype() == "Apple")
			{
				mac.getcputype();
			}
			mac.getComputer()->setPhysicalMemory(ram_capacity);
			mac.getStorageDevice()->settype(type_storagedevice);
			mac.getStorageDevice()->setcapacity(capacity_storagedevice);
			mac.getNetworkCard()->settype(network_card_type);
			if (lp == "PC")
			{
				mac.set_laptop_or_pc(lp);
			}

			///////////////OUTPUTS
			cout << "\nnumber of ports: " << number_of_ports;
		
			for (int i = 0; i < number_of_ports; i++)
			{
				cout << "\ntype of port " << i + 1;
				cout << mac.getComputer()->getMotherBoard().getPorts()->gettype();
				cout << "\nbaud rate of port " << i + 1;
				cout << mac.getComputer()->getMotherBoard().getPorts()->getbrate();
			}
			cout << "\ncapacity in main memory: " << mac.getComputer()->getMotherBoard().getMainMemory()->getcapacity();
			cout << "\ntechnology type of main memory: " << mac.getComputer()->getMotherBoard().getMainMemory()->gettechtype();
			cout << "\nMemory size of graphics card: " << mac.get_apple_cpu().getapple_gpu().getmemorysize();
			cout << "\nPrice of graphics card: " << mac.get_apple_cpu().getapple_gpu().getprice();
			cout << "\nBrand of graphics card: " << mac.getcputype();
			cout << "\nType of CPU: " << mac.getcputype();
			cout << "\nclock speed of control unit: " << mac.getComputer()->getCPU().getcontrolunit()->getclock();
			cout << "\nNumber of adders in ALU: " << mac.getComputer()->getCPU().getalu()->getadd();
			cout << "\nSubtractors in ALU: " << mac.getComputer()->getCPU().getalu()->getsub();
			cout << "\nRAM capacity: " << mac.getComputer()->getPhysicalMemory();
			cout << "\nType of Storage device: " << mac.getStorageDevice()->gettype();
			cout << "\nCapacity of Storage device: " << mac.getStorageDevice()->getcapacity();
			cout << "type of network card: " << mac.getNetworkCard()->gettype();
			cout << "type of cpu: " << mac.getComputer()->getCPU().gettype();
			cout << "laptop/PC: " << mac.get_laptop_or_pc();
		}
		else if (cpu_type == "Intel")
		{

			pc.getComputer()->getCPU().settype(cpu_type);
			pc.getComputer()->getCPU().getalu()->setsizereg(64);//assumable thing for an apple cpu
			pc.getComputer()->getCPU().getalu()->setadd(num_adders_alu);
			pc.getComputer()->getCPU().getalu()->setsub(num_sub_alu);

			for (int i = 0; i < number_of_ports; i++)
			{
				//because this is a loop storing values one at a time
				cout << "Specifications for port # " << i + 1;
				cout << "\nType: ";
				string type;
				int baud_rate;
				cin >> type;
				cout << "baud rate: ";
				cin >> baud_rate;
				Port port(type, baud_rate);
				pc.getComputer()->getMotherBoard().getPorts()->settype(type);
				pc.getComputer()->getMotherBoard().getPorts()->setbrate(baud_rate);
			}
			pc.getComputer()->getMotherBoard().getMainMemory()->setcapcity(capacity_main_memory);
			if (techtype_mainmemory != "Silicon" && techtype_mainmemory != "Semiconductor")
			{
				cout << "Invalid !!!";
				validity = false;

			}
			else
			{
				pc.getComputer()->getMotherBoard().getMainMemory()->gettechtype() = techtype_mainmemory;
			}
			pc.getComputer()->getCPU().gettype();

			pc.getComputer()->getCPU().getcontrolunit()->setclock(clock_control_unit);

			pc.getComputer()->setPhysicalMemory(ram_capacity);
			pc.getStorageDevice()->settype(type_storagedevice);
			pc.getStorageDevice()->setcapacity(capacity_storagedevice);
			pc.getNetworkCard()->settype(network_card_type);
			if (lp == "PC")
			{
				pc.set_laptop_or_pc(lp);
			}

			///////////////OUTPUTS
			cout << "\nnumber of ports: " << number_of_ports;
			for (int i = 0; i < number_of_ports; i++)
			{
				cout << "\ntype of port " << i + 1;
				cout << pc.getComputer()->getMotherBoard().getPorts()->gettype();
				cout << "\nbaud rate of port " << i + 1;
				cout << pc.getComputer()->getMotherBoard().getPorts()->getbrate();
			}
			cout << "\ncapacity in main memory: " << pc.getComputer()->getMotherBoard().getMainMemory()->getcapacity();
			cout << "\ntechnology type of main memory: " << pc.getComputer()->getMotherBoard().getMainMemory()->gettechtype();

			cout << "\nclock speed of control unit: " << pc.getComputer()->getCPU().getcontrolunit()->getclock();
			cout << "\nNumber of adders in ALU: " << pc.getComputer()->getCPU().getalu()->getadd();
			cout << "\nSubtractors in ALU: " << pc.getComputer()->getCPU().getalu()->getsub();
			cout << "\nRAM capacity: " << pc.getComputer()->getPhysicalMemory();
			cout << "\nType of Storage device: " << pc.getStorageDevice()->gettype();
			cout << "\nCapacity of Storage device: " << pc.getStorageDevice()->getcapacity();
			cout << "type of network card: " << pc.getNetworkCard()->gettype();
			cout << "type of cpu: " << pc.getComputer()->getCPU().gettype();
			cout << "laptop/PC: " << pc.get_laptop_or_pc();
			cout << "price" << pc.gettotalprice();
		}
		else
		{
			validity = false;
		}
		validity = true;

	}
}
