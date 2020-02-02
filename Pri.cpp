#include "Pri.h"

/*
Function name:Pri
The input: -
The ouput: -
The function operation:default constructor
*/
Pri::Pri()
{
}

/*
Function name:~Pri
The input: -
The ouput: -
The function operation:default distructor
*/
Pri::~Pri()
{
}

/*
Function name:Pri
The input: Pri & p
The ouput: -
The function operation:copy constructor
*/
Pri::Pri(Pri & p):Haklai(p)
{
	m_sugar = p.m_sugar;
}

/*
Function name:setSugar
The input: int
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Pri::setSugar(int sugar)
{
	if (sugar < 0)
	{
		delete this;
		throw "Amount cant be negative";
	}
	m_sugar = sugar;
}

/*
Function name:set
The input: int
The ouput: -
The function operation:ask from the user all the base quetions and use the set functions to set the data members
*/
void Pri::set(int num)throw (const char*)
{
	double num1;
	Haklai::set(num);
	cout << "Enter amount of sugar for 100g" << endl;
	cin >> num1;
	setSugar(num1);
}

/*
Function name:getPrice
The input: -
The ouput: -
The function operation:calculate the price
*/
double Pri::getPrice(int publish)
{
	return (Haklai::getPrice(publish) + m_sugar / 2);
}

/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Pri::print()
{
	Haklai::print();
	cout << " (" << m_sugar << ")";
	cout << endl;
}
