// 07_02_Singleton_Start.cpp

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Leader
{
private:
	static Leader* _instance;
	Leader()
	{
		cout << "New Leader elected" << endl;
	}
public:
	static Leader * getInstance()
	{
		if (_instance == NULL)
		{
			_instance = new Leader;
		}
		return _instance;
	}
	void giveSpeech()
	{
		cout << "Address the public" << endl;
	}
};

Leader* Leader::_instance = NULL;
int main()
{
	// Can not access private member declared in class
	// Leader *elected = new Leader();
	// elected->giveSpeech();
	Leader::getInstance()->giveSpeech();
}

