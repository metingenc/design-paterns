#include "Command.h"
#include "NoCommand.h"
#include "WashingMachine.h"
#include "WashingMachineOff.h"
#include "WashingMachineOn.h"
#include "WashingMachineRun.h"
#include "Dryer.h"
#include "DryerOff.h"
#include "DryerOn.h"
#include "DryerRun.h"
#include "Tv.h"
#include "TvOff.h"
#include "TvOn.h"
#include "TvRun.h"
#include "SetupScreen.h"
#include <iostream>

int main()
{
   std::cout<<"Command Pattern Example"<<std::endl;

   // Create Receivers ------------------------------------
   WashingMachine *wm = new WashingMachine();
   Dryer *dryer = new Dryer();
   Tv *tv = new Tv();
   // -----------------------------------------------------

   // Create Commands -------------------------------------
   Command *dryerOn = new DryerOn(dryer);
   Command *dryerOff = new DryerOff(dryer);
   Command *dryerRun = new DryerRun(dryer);

   Command *tvOn = new TvOn(tv);
   Command *tvOff = new TvOff(tv);
   Command *tvRun = new TvRun(tv);

   Command *wmOff = new WashingMachineOff(wm);
   Command *wmOn = new WashingMachineOn(wm);
   Command *wmRun = new WashingMachineRun(wm);
   // -----------------------------------------------------

   // Create the Invoker and set commands -----------------
   SetupScreen *setupScreen = new SetupScreen();   
   setupScreen->setCommand(0,wmOn, wmOff,wmRun);
   setupScreen->setCommand(1,dryerOn, dryerOff,dryerRun);
   setupScreen->setCommand(2,tvOn, tvOff,tvRun);
   // -----------------------------------------------------
   
   // Run the commands from The Invoker -------------------
   setupScreen->offIsPressed(0);
   setupScreen->onIsPressed(0);
   setupScreen->runIsPressed(0);

   setupScreen->offIsPressed(1);
   setupScreen->onIsPressed(1);
   setupScreen->runIsPressed(1);

   setupScreen->offIsPressed(2);
   setupScreen->onIsPressed(2);
   setupScreen->runIsPressed(2);
   // -----------------------------------------------------

   return 0;
}
