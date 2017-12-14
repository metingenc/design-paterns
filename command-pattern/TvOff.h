#ifndef TV_OFF_H
#define TV_OFF_H

#include "Command.h"
#include "Tv.h"
#include <iostream>

class TvOff : public Command
{
   public:
	TvOff(Tv *tv)
	{
	   this->tv = tv;
	}

	~TvOff()
	{
	   delete tv;
	}

	void execute()
	{
	   tv->off();
	}

   private:
      Tv *tv;
};

#endif


