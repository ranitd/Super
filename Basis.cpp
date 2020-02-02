#include "Basis.h"

/*
Function name:Basis
The input: -
The ouput: -
The function operation: default constructor
*/
Basis::Basis()
{
}

/*
Function name:~Basis
The input: -
The ouput: -
The function operation:default distructor
*/
Basis::~Basis()
{
}

/*
Function name:Basis
The input: Basis & b
The ouput: -
The function operation: copy constructor
*/
Basis::Basis(Basis & b)
{
	m_serialNum = b.m_serialNum;
	m_rawPlace = b.m_rawPlace;
	m_area = b.m_area;
	m_quantity = b.m_quantity;
	m_shelfPlace = b.m_shelfPlace;
	m_type = b.m_type;
}

/*
Function name:getSerielNum
The input: -
The ouput: int
The function operation: return serial number
*/
int Basis::getSerielNum()
{
	return m_serialNum;
}

/*
Function name:setSerialNum
The input: int
The ouput: -
The function operation:set the data member
*/
void Basis::setSerialNum(int serialNum)throw (const char*)
{
	m_serialNum = serialNum;
}

/*
Function name:setRawPlace
The input: char
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Basis::setRawPlace(char raw)throw (const char*)
{
	if (((int)raw < 65 || (int)raw > 90))
		throw string("raw not valid");
	m_rawPlace = raw;
}

/*
Function name:setShelfPlace
The input: -
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Basis::setShelfPlace(int shelf)throw (const char*)
{
	if (shelf < 1 || shelf > 5)
		throw string("shelf's number not valid");
	m_shelfPlace = shelf;
}

/*
Function name:setQuantity
The input: double
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Basis::setQuantity(double quantity)throw (const char*)
{
	if (quantity<0)
		throw string("quantity cant be negative");
	m_quantity = quantity;
}

/*
Function name:getArea
The input: -
The ouput: int
The function operation:return the area
*/
int Basis::getArea()
{
	return m_area;
}

/*
Function name:setArea
The input: -
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Basis::setArea(int area)throw (const char*)
{
	if (area < 1 || area>3)
		throw string("area not valid");
	m_area = area;
}

/*
Function name:set
The input: int
The ouput: -
The function operation: ask from the user all the base quetions and use the set functions to set the data members
*/
void Basis::set(int num)throw (const char*)
{
	int num1;
	char raw;
	int shelf;
	//set raw
	cout << "Enter raw between A-Z" << endl;
	cin >> raw;
	setRawPlace(raw);
	//set shelf
	cout << "Enter number of shelf between 1-5" << endl;
	cin >> shelf;
	setShelfPlace(shelf);
	cout << "Enter quantity" << endl;
	cin >> num1;
	setQuantity(num1);
	cout << "Enter number of area between 1-3" << endl;
	cin >> num1;
	setArea(num1);
	//set the type
	if (num <= 2)
		m_type = 1;
	if (num == 3)
		m_type = 2;
	else
		m_type = 3;
}

/*
Function name:getPrice
The input: -
The ouput: int
The function operation: calculate the price
*/
double Basis::getPrice(int publish)
{
	return m_quantity*m_area*publish;
}

/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Basis::print()
{
	cout << m_serialNum << " " << m_rawPlace << " " << m_shelfPlace << " (" << m_quantity << "," << m_type << "," << m_area << ")";
}

