-----------------------------------------------------------------------------
 Command Pattern Problem [This problem is taken from the course SM523 @metu]
-----------------------------------------------------------------------------

Assume that you have a smart home including washing machine, dryer, TV, oven, etc. All of these machines are smart and can be controlled by a mobile application in your smart phone.
You are designing this mobile application. Currently your application has a limited control on these devices. In other words, the owner can only turn on, turn off and run in basic mode (for TV open a random channel, for washing machine, run in 40 C and 30 minutes, etc.) any of these machines. Your application will have 2 sets of buttons. The buttons on the left decide the device. The buttons on the right are turn on, turn off and run buttons.

-DEVICE-  -FUNCTION-
 Device1   Turn ON
 Device2   Turn OFF
 Device3   Run
	
Initially, the device buttons are unassigned. A set up screen is used to assign a device for a specific device button.Suggest a flexible design to facilitate this device controller app.
DO NOT design the set up screen, but assume there is a “SetupScreen” class. Show how turn on , turn off, run actions for a specific device will get selected and the actions take place.
TRY NOT TO USE to multiple conditionals  (IF-ELSEIF….or SWITCH CASE) to select a command object. There are several ways to do it, one alternative is to use hashtables.
File is created for command patterns
