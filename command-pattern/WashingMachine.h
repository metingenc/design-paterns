#ifndef WASHING_MACHINE_H
#define WASHING_MACHINE_H

#include <iostream>

class WashingMachine
{
	public:
		WashingMachine()
		{
		
		}
		~WashingMachine()
		{
		
		}
		
		void on()
		{
		   std::cout<<"Washing Machine is on"<<std::endl;
		}

		void off()
		{
		   std::cout<<"Washing Machine is off"<<std::endl;
		}

		void run()
		{
		   std::cout<<"Washing Machine is running"<<std::endl;
		}

		void setTime(int time)
		{
		   std::cout<<"Washing Machine time: "<<time<<" minutes"<<std::endl;
		}

		void setTemperature(int temp)
		{
		   std::cout<<"Washine Machine temperature: "<<temp<<"°C"<<std::endl;
		}

};

#endif
