#include <iostream>
#include "Compiler.h"
#include "LinuxCompiler.h"
#include "WindowsCompiler.h"

int main()
{
   std::cout<<"Template Method Example"<<std::endl;

   Compiler *linuxCompiler = new LinuxCompiler();
   linuxCompiler->Compile();   

   Compiler *windowsCompiler = new WindowsCompiler();
   windowsCompiler->Compile();

   return 0;
}
