#ifndef TV_RUN_H
#define TV_RUN_H

#include "Command.h"
#include "Tv.h"
#include <iostream>

class TvRun : public Command
{
   public:

	TvRun(Tv *tv)
	{
	   this->tv = tv;
	}

	~TvRun()
	{
	   delete tv;
	}

	void execute()
	{
	   tv->run();
	}

   private:

      Tv *tv;
};

#endif
