#include "Mashke.h"

/*
Function name:Mashke
The input: -
The ouput: -
The function operation:default constructor
*/
Mashke::Mashke()
{
}

/*
Function name:~Mashke
The input: -
The ouput: -
The function operation:default distructor
*/
Mashke::~Mashke()
{
}

/*
Function name:Mashke
The input: Mashke & m
The ouput: -
The function operation:copy constructor
*/
Mashke::Mashke(Mashke & m):Halav(m)
{
}

/*
Function name:set
The input: int
The ouput: -
The function operation:ask from the user all the base quetions and use the set functions to set the data members
*/
void Mashke::set(int num)throw (const char*)
{
	Halav::set(num);
}

/*
Function name:getPrice
The input: -
The ouput: -
The function operation:calculate the price
*/
double Mashke::getPrice(int publish)
{
	return Halav::getPrice(publish);
}
\
/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Mashke::print()
{
	Halav::print();
	cout << endl;
}
