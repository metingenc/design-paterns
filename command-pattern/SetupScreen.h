#ifndef SETUP_SCREEN
#define SETUP_SCREEN

#include "NoCommand.h"
#include "Command.h"
#include <vector>

class SetupScreen
{
public:

	SetupScreen()
	{
	
	    Command *noCommand = new NoCommand();

	    for(int i = 0; i<devNumber ;i++)
	    {
	    	CommandOn.push_back(noCommand);
		CommandOff.push_back(noCommand);
		CommandRun.push_back(noCommand);
	    }

	}

	~SetupScreen()
	{
	
	}

	void setCommand(int dev, Command *on, Command *off, Command *run)
	{
	    	CommandOn[dev] = on;
	    	CommandOff[dev] = off;
	    	CommandRun[dev] = run;
	}

	void onIsPressed(int dev)
	{
	   CommandOn[dev]->execute();
	}

	void offIsPressed(int dev)
	{
	   CommandOff[dev]->execute();
	}

	void runIsPressed(int dev)
	{
	   CommandRun[dev]->execute();
	}

private:
	const int devNumber = 3;
	std::vector<Command*> CommandOn;
	std::vector<Command*> CommandOff;
	std::vector<Command*> CommandRun;
};

#endif

