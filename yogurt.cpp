#include "yogurt.h"

/*
Function name:Yogurt
The input: -
The ouput: -
The function operation:default constructor
*/
Yogurt::Yogurt()
{
}

/*
Function name:~Yogurt
The input: -
The ouput: -
The function operation:default distructor
*/
Yogurt::~Yogurt()
{
}

/*
Function name:Yogurt
The input: Yogurt & y
The ouput: -
The function operation:copy constructor
*/
Yogurt::Yogurt(Yogurt & y):Halav(y)
{
}

/*
Function name:set
The input: int
The ouput: -
The function operation:ask from the user all the base quetions and use the set functions to set the data members
*/
void Yogurt::set(int num)throw (const char*)
{
	Halav::set(num);
}

/*
Function name:getPrice
The input: -
The ouput: -
The function operation:calculate the price
*/
double Yogurt::getPrice(int publish)
{
	return Halav::getPrice(publish);
}

/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Yogurt::print()
{
	Halav::print();
	cout << endl;
}
