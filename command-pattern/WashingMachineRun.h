#ifndef WASHING_MACHINE_RUN_H
#define WASHING_MACHINE_RUN_H

#include "Command.h"
#include "WashingMachine.h"
#include <iostream>

class WashingMachineRun : public Command
{
   public:
	WashingMachineRun(WashingMachine *washingMachine)
	{
	   this->washingMachine = washingMachine;
	}

	~WashingMachineRun()
	{
	   delete washingMachine;
	}

	void execute()
	{
	   washingMachine->setTime(30);
   	   washingMachine->setTemperature(50);	   
	   washingMachine->run();
	}

   private:
      WashingMachine *washingMachine;
};

#endif
