#ifndef DRYER_H
#define DRYER_H

#include <iostream>

class Dryer
{
	public:
		Dryer()
		{
		
		}
	
		~Dryer()
		{
		
		}
		
		void on()
		{
		   std::cout<<"Dryer is on"<<std::endl;
		}

		void off()
		{
		   std::cout<<"Dryer is off"<<std::endl;
		}

		void run()
		{
		   std::cout<<"Dryer is running"<<std::endl;
		}
};

#endif
