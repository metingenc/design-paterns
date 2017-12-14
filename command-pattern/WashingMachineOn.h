#ifndef WASHING_MACHINE_ON_H
#define WASHING_MACHINE_ON_H

#include "Command.h"
#include "WashingMachine.h"
#include <iostream>

class WashingMachineOn : public Command
{
   public:

	WashingMachineOn(WashingMachine *washingMachine)
	{
	   this->washingMachine = washingMachine;
	}

	~WashingMachineOn()
	{
	   delete washingMachine;
	}

	void execute()
	{
	   washingMachine->on();
	}

   private:

      WashingMachine *washingMachine;
};

#endif
