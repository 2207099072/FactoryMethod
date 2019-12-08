#include "Button.h"
#include<string>
using namespace std;
class Factory
{
	public: 
	Factory();
	virtual ~Factory();
	static Button* createButton(string bname);
}; 
