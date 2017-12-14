#ifndef DRYER_ON_H
#define DRYER_ON_H

#include "Command.h"
#include "Dryer.h"
#include <iostream>

class DryerOn : public Command
{
   public:
	DryerOn(Dryer *dryer)
	{
	   this->dryer = dryer;
	}

	~DryerOn()
	{
	   delete dryer;
	}

	void execute()
	{
	   dryer->on();
	}

   private:
      Dryer *dryer;
};

#endif
