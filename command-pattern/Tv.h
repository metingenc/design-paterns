#ifndef TV_H
#define TV_H

#include <iostream>

class Tv
{
	public:
		Tv()
		{
		
		}
		~Tv()
		{
		
		}
		
		void on()
		{
		   std::cout<<"Tv is on"<<std::endl;
		}

		void off()
		{
		   std::cout<<"Tv is off"<<std::endl;
		}

		void run()
		{
		   std::cout<<"Tv is running"<<std::endl;
		}

};

#endif
