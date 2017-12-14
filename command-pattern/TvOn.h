#ifndef TV_ON_H
#define TV_ON_H

#include "Command.h"
#include "Tv.h"
#include <iostream>

class TvOn : public Command
{
   public:
	TvOn(Tv *tv)
	{
	   this->tv = tv;
	}

	~TvOn()
	{
	   delete tv;
	}

	void execute()
	{
	   tv->on();
	}

   private:
      Tv *tv;
};

#endif
