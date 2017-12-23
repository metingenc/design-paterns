#ifndef COMPILER_H
#define COMPILER_H

// Abstract Class
class Compiler
{
   public:
	  
	   // Template Method
	   void Compile()
	   {              
	      writeCode();
	      collectSource();
	      compileToTarget();
	      hook();
	   }

	   // Mandatory Operation
	   void writeCode()
	   {
	      std::cout<<"Write some code"<<std::endl;
	   }
	   
	   // Primitive Methods
	   virtual void collectSource() = 0;
	   virtual void compileToTarget() = 0;

	   // Hook
	   virtual void hook()	   
	   {
	      // Do nothing but free to override
	   }

};

#endif
