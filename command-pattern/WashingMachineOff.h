#ifndef WASHING_MACHINE_OFF_H
#define WASHING_MACHINE_OFF_H

#include "Command.h"
#include "WashingMachine.h"
#include <iostream>

class WashingMachineOff : public Command
{
   public:
	WashingMachineOff(WashingMachine *washingMachine)
	{
	   this->washingMachine = washingMachine;
	}

	~WashingMachineOff()
	{
	   delete washingMachine;
	}

	void execute()
	{
	   washingMachine->off();
	}

   private:
      WashingMachine *washingMachine;
};

#endif


