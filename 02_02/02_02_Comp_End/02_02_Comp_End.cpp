// 02_02_Comp_Start.cpp 
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// Base Entree class
class Entree
{
protected:
	char _entree[10];
public:
	const char *getEntree()
	{
		return _entree;
	}
};


// Base Side class
class Side
{
protected:
	char _side[10];
public:
	char *getSide()
	{
		return _side;
	}
};

class Drink
{
protected:
	char _drink[10];
public:
	Drink()
	{
		cout << "\n Fill cup with soda" << endl;
		strcpy_s(_drink, "soda");
	}
	char *getDrink()
	{
		return _drink;
	}
};

// Complex MealCombo object that contains an Entree, a Side and a Drink object
class MealCombo
{
private:
	Entree * entree;
	Side * side;
	Drink * drink;
	char _bag[100];
public:
	MealCombo(const char *type)
	{
		sprintf_s(_bag, "\n %s meal combo:", type);
	}
	void setEntree(Entree *e)
	{
		entree = e;
	}
	void setSide(Side *s)
	{
		side = s;
	}
	void setDrink(Drink *d)
	{
		drink = d;
	}
	const char *openMealBag()
	{
		sprintf_s(_bag, "%s %s, %s, %s", _bag, entree->getEntree(), side->getSide(), drink->getDrink());
		return _bag;
	}
};

int main()
{
	cout << "Testing MealCombo..." << endl;

	MealCombo combo("Burger");
	Entree e;
	Side s;
	Drink d;

	// You should initialize _entree and _side manually here since there's no constructor logic
	strcpy_s((char*)e.getEntree(), 10, "Burger");
	strcpy_s(s.getSide(), 10, "Fries");

	combo.setEntree(&e);
	combo.setSide(&s);
	combo.setDrink(&d);

	cout << combo.openMealBag() << endl;

	return 0;
}
