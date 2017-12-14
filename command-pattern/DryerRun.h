#ifndef DRYER_RUN_H
#define DRYER_RUN_H

#include "Command.h"
#include "Dryer.h"
#include <iostream>

class DryerRun : public Command
{
   public:

	DryerRun(Dryer *dryer)
	{
	   this->dryer = dryer;
	}

	~DryerRun()
	{
	   delete dryer;
	}

	void execute()
	{
	   dryer->run();
	}

   private:

      Dryer *dryer;
};

#endif
