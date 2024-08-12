# Computer System Design

## Overview
This repository contains a C++ project designed to model and simulate the construction of computer systems. It includes a set of classes representing various computer components and their relationships. The project allows for creating and displaying specifications and prices of different computer configurations, including both PCs and Macs.

## Classes Overview
- **ALU**: Represents an Arithmetic Logic Unit with attributes for adders, subtractors, registers, and their sizes.
- **ControlUnit**: Represents a control unit with a clock attribute.
- **CPU**: Composed of an ALU and a ControlUnit, representing a CPU with integrated or discrete components.
- **MainMemory**: Represents the main memory of a computer with capacity and technology type.
- **Port**: Represents different types of ports (e.g., VGI, I/O, USB) with baud rate.
- **MotherBoard**: Composed of ports and aggregated with main memory.
- **PhysicalMemory**: Represents physical memory with capacity.
- **Computer**: Aggregates PhysicalMemory, CPU, and MotherBoard to represent a complete computer system.
- **GraphicsCard**: Represents a graphics card with brand, memory size, and price.
- **StorageDevice**: Represents a storage device (HDD/SSD) with type, capacity, and price.
- **NetworkCard**: Represents a network card (Ethernet/Wi-Fi) with type, speed, and price.
- **PowerSupply**: Represents a power supply unit with wattage, efficiency rating, and price.
- **Battery**: Represents a battery with capacity.
- **Case**: Represents a computer case with form factor and color. Note: The case price is applicable to PCs only.
- **ComputerAssembly**: Aggregates all components and calculates the total price of the assembled computer.

## Features
- Create and initialize various computer components.
- Aggregate components into complete computer systems (PCs or Macs).
- Display the specifications and price of the computer system.
- Handle user inputs and errors gracefully.

## UML Diagram
A detailed UML diagram illustrating the relationships between classes (composition, aggregation, and inheritance) is provided. The diagram includes all class names, attributes, and methods used in the project.

## How to Use
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/ComputerSystemDesign.git
