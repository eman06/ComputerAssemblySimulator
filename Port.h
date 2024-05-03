#pragma once
#include<iostream>
#include <string>
class Port
{
	std::string type;
	//((Possible values: VGI Port,I/O Port,USB Port,HDMI Port etc)
	int baud_rate;

	public:
		Port();
		Port(std::string t, int br);
		std::string gettype();
		void settype(std::string t);
		int getbrate();
		void setbrate(int t);
		
		friend std::istream& operator>>(std::istream& input, Port& port) {
			input >> port.type >> port.baud_rate;
			return input;
		}
		friend std::ostream& operator<<(std::ostream& output, const Port& port) {
			output << "Type: " << port.type << ", Baud Rate: " << port.baud_rate;
			return output;
		}
};

