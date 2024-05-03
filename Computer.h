
#include "MotherBoard.h"
#include "PhysicalMemory.h"
#include"CPU.h"
/* 
computer class is AGGREGATED of cpu, motherboard and physical memory
they can exist independetly thats why there is no destructor
*/
class Computer
{
protected:
	MotherBoard m;
	PhysicalMemory pm;
	CPU c;
public:
	Computer();
	Computer(MotherBoard m,PhysicalMemory pm,CPU c);
	/* creating getters and setters bcz computer can modify and have direct accses to physical memory
	,mother board and cpu*/
	MotherBoard& getMotherBoard();
	PhysicalMemory& getPhysicalMemory();
	CPU& getCPU();
	void setMotherBoard(const MotherBoard& newMotherBoard);
	void setPhysicalMemory(const PhysicalMemory& newPhysicalMemory);
	void setCPU(const CPU& newCPU);
	friend std::istream& operator>>(std::istream& input, Computer& computer) {
		// Input MotherBoard, PhysicalMemory, and CPU objects
		input >> computer.m;
		input >> computer.pm;
		input >> computer.c;
		return input;
	}
	friend std::ostream& operator<<(std::ostream& output, const Computer& computer) {
		output << "MotherBoard: " << computer.m << std::endl;
		output << "PhysicalMemory: " << computer.pm << std::endl;
		output << "CPU: " << computer.c << std::endl;
		return output;
	}
};
