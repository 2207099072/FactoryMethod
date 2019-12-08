#include <iostream>
#include "Button.h"
#include "FactoryB.h"
using namespace std;

int main(int argc, char** argv) {
	FactoryB* f=new FactoryB()
	Button* b=f->createButton();
	b->showType();
	delete b;
	return 0;
}
