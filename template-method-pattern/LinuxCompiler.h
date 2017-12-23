#ifndef LINUX_COMPILER_H
#define LINUX_COMPILER_H

#include "Compiler.h"
#include <iostream>

// Concrete Class
class LinuxCompiler : public Compiler
{
   public:

	   // Primitive Method
	   void collectSource()
	   {
	      std::cout<<"Collect sources for Linux"<<std::endl;
	   }

	   // Primitive Method	   
	   void compileToTarget()
	   {
	      std::cout<<"Compile source for Linux"<<std::endl;
	   }
	   
	   // Optional Method
	   void hook()
	   {
	      std::cout<<"I prefer Linux"<<std::endl;
	   }

};

#endif
