#ifndef DRYER_OFF_H
#define DRYER_OFF_H

#include "Command.h"
#include "Dryer.h"
#include <iostream>

class DryerOff : public Command
{
   public:

	DryerOff(Dryer *dryer)
	{
	   this->dryer = dryer;
	}

	~DryerOff()
	{
	   delete dryer;
	}

	void execute()
	{
	   dryer->off();
	}

   private:

      Dryer *dryer;
};

#endif


