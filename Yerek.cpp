#include "Yerek.h"

/*
Function name:Yerek
The input: -
The ouput: -
The function operation:default constructor
*/
Yerek::Yerek()
{
}

/*
Function name:~Yerek
The input: -
The ouput: -
The function operation:default distructor
*/
Yerek::~Yerek()
{
}

/*
Function name:Yerek
The input: Yerek & y
The ouput: -
The function operation:copy constructor
*/
Yerek::Yerek(Yerek & y) :Haklai(y)
{
	m_vitamin = y.m_vitamin;
}

/*
Function name:setVitamin
The input: int
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Yerek::setVitamin(int vit)
{
	if (vit < 0)
	{
		delete this;
		throw "Number of vitamins cant be negative";
	}
	m_vitamin = vit;
}

/*
Function name:set
The input: int
The ouput: -
The function operation:ask from the user all the base quetions and use the set functions to set the data members
*/
void Yerek::set(int num)throw (const char*)
{
	int num1;
	Haklai::set(num);
	cout << "Enter number of vitamins" << endl;
	cin >> num1;
	setVitamin(num1);
}

/*
Function name:getPrice
The input: -
The ouput: -
The function operation:calculate the price
*/
double Yerek::getPrice(int publish)
{
	return (Haklai::getPrice(publish) + m_vitamin * 2);
}

/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Yerek::print()
{
	Haklai::print();
	cout << " (" << m_vitamin << ")";
	cout << endl;
}
