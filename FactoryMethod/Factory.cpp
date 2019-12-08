#include "Factory.h"
#include "ButtonA.h"
FactoryA::FactoryA(){} 
FactoryA::~FactoryA(){}
Button* FactoryA::createButton()
{
		return new ButtonA();
}
