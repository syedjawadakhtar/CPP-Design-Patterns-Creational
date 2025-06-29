// 07_03_Singleton_Start.cpp
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Leader
{
private:
	static Leader * _instance;
	Leader()
	{
		cout << "New leader elected" << endl;
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
	Leader::getInstance()->giveSpeech();
	Leader *elected = elected->getInstance(); // This time the instance has already been created
	elected->giveSpeech(); // Outputs
}

