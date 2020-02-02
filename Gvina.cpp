#include "Gvina.h"

/*
Function name:Gvina
The input: -
The ouput: -
The function operation:default constructor
*/
Gvina::Gvina()
{
}

/*
Function name:~Gvina
The input: -
The ouput: -
The function operation:default distructor
*/
Gvina::~Gvina()
{
}

/*
Function name:Gvina
The input: Gvina & g
The ouput: -
The function operation:copy constructor
*/
Gvina::Gvina(Gvina & g):Halav(g)
{
	m_add = g.m_add;
}

/*
Function name:setAdd
The input: int
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Gvina::setAdd(int add)
{
	if (add < 0)
	{
		delete this;
		throw string("Additions cant be negative");
	}
	m_add = add;
}

/*
Function name:set
The input: int
The ouput: -
The function operation:ask from the user all the base quetions and use the set functions to set the data members
*/
void Gvina::set(int num)throw (const char*)
{
	Halav::set(num);
	int num1;
	cout << "Enter number of additions" << endl;
	cin >> num1;
	setAdd(num1);
}

/*
Function name:getPrice
The input: int
The ouput: -
The function operation: calculate the price
*/
double Gvina::getPrice(int publish)
{
	return (Halav::getPrice(publish) + m_add);
}

/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Gvina::print()
{
	Halav::print();
	cout << " (" << m_add << ")";
	cout << endl;
}
