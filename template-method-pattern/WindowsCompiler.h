#ifndef WINDOWS_COMPILER_H
#define WINDOWS_COMPILER_H

#include "Compiler.h"
#include <iostream>

// Concrete Class
class WindowsCompiler : public Compiler
{
   public:

	   // Primitive Method
	   void collectSource()
	   {
	      std::cout<<"Collect sources for Windows"<<std::endl;
	   }

	   // Primitive Method	   
	   void compileToTarget()
	   {
	      std::cout<<"Compile source for Windows"<<std::endl;
	   }

};

#endif
