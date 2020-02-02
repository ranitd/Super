#include "Haklai.h"

/*
Function name: Haklai
The input: -
The ouput: -
The function operation: default constructor
*/
Haklai::Haklai()
{
	m_name = NULL;
}

/*
Function name:~Haklai
The input: -
The ouput: -
The function operation:default distructor
*/
Haklai::~Haklai()
{
	delete[] m_name;
}

/*
Function name:Haklai
The input: Haklai & a
The ouput: -
The function operation: copy constructor
*/
Haklai::Haklai(Haklai & a)
{
	m_seasonNum + a.m_seasonNum;
	m_numSupplier = a.m_numSupplier;
	m_kind = a.m_kind;
	m_name = new char[strlen(a.m_name) + 1];
	strcpy(m_name, a.m_name);
}

/*
Function name:setSeason
The input: int
The ouput: -
The function operation: check correctness of the input and change the data memeber
*/
void Haklai::setSeason(int season)
{
	if (season < 1 || season>4)
	{
		delete this;
		throw("not valid season");
	}
	m_seasonNum = season;
}

/*
Function name:setSupplier
The input: int
The ouput: -
The function operation: check correctness of the input and change the data memeber
*/
void Haklai::setSupplier(int supplier)
{
	if (supplier < 0)
		throw string("number of suppluer cant be negative");
	m_numSupplier = supplier;
}

/*
Function name: set
The input: int
The ouput: -
The function operation: ask from the user all the base quetions and use the set functions to set the data members
*/
void Haklai::set(int num)throw (const char*)
{
	Basis::set(num);
	int num1;
	char name[30];
	m_kind = num;
	cout << "Enter name" << endl;
	cin >> name;
	//set the name
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
	cout << "Enter number of seasons" << endl;
	cin >> num1;
	setSeason(num1);
	cout << "Enter number of suppliers" << endl;
	cin >> num1;
	setSupplier(num1);
}

/*
Function name:getPrice
The input: int
The ouput: price
The function operation: calculate the price
*/
double Haklai::getPrice(int publish)
{
	return Basis::getPrice(publish) * 3 * (5 - m_seasonNum) + (m_numSupplier) * 5 + m_kind;
}

/*
Function name:print
The input: -
The ouput: -
The function operation: print the data members
*/
void Haklai::print()
{
	Basis::print();
	cout << m_name << " (" << m_kind << "," << m_seasonNum << "," << m_numSupplier << ")";
}