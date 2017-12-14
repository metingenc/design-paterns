#ifndef NO_COMMAND_H
#define NO_COMMAND_H

#include "Command.h"
#include <iostream>

class NoCommand : public Command
{
   public:
	   void execute()
	   {
		   std::cout<<"Do Nothing"<<std::endl;
	   }
};

#endif
