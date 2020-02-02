#include "Halav.h"

/*
Function name:Halav
The input: -
The ouput: -
The function operation:default constructor
*/
Halav::Halav()
{
	m_name = NULL;
}

/*
Function name:~Halav
The input: -
The ouput: -
The function operation:default distructor
*/
Halav::~Halav()
{
	delete[] m_name;
}

/*
Function name:Halav
The input: Halav & h
The ouput: -
The function operation:copy constructor
*/
Halav::Halav(Halav & h)
{
	m_kind = h.m_kind;
	m_colorNum = h.m_colorNum;
	m_fatNum = h.m_fatNum;
	m_name = new char[strlen(h.m_name) + 1];
	strcpy(m_name, h.m_name);
}

/*
Function name:setColor
The input: int
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Halav::setColor(int color)
{
	if (color < 0)
	{
		delete this;
		throw "number of colors cant be negative";
	}
	m_colorNum = color;
}

/*
Function name:setFat
The input: double
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Halav::setFat(double fat)
{
	if (fat < 0)
		throw string("number of fat percentage cant be negative");
	m_fatNum = fat;
}

/*
Function name:set
The input: -
The ouput: -
The function operation:ask from the user all the base quetions and use the set functions to set the data members
*/
void Halav::set(int num)throw (const char*)
{
	Basis::set(num);
	m_kind = num - 3;
	int num1;
	char name[30];
	cout << "Enter name" << endl;
	cin >> name;
	//set the name
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	cout << "Enter number of colors" << endl;
	cin >> num1;
	setColor(num1);
	cout << "Enter number of fat percentage" << endl;
	cin >> num1;
	setFat(num1);
}

/*
Function name:getPrice
The input: int
The ouput: -
The function operation:calculate the price
*/
double Halav::getPrice(int publish)
{
	return (Basis::getPrice(publish) + m_colorNum - m_fatNum)*m_kind;
}

/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Halav::print()
{
	Basis::print();
	cout << " " << m_name << " (" << m_kind << "," << m_colorNum << "," << m_fatNum << ")";

}
