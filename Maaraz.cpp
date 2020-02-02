#include "Maaraz.h"

/*
Function name:Maaraz
The input: -
The ouput: -
The function operation:default constructor
*/
Maaraz::Maaraz()
{
}

/*
Function name:~Maaraz
The input: -
The ouput: -
The function operation:default distructor
*/
Maaraz::~Maaraz()
{
	for (int i = 0; i<m_productNum; i++)
		delete[] m_itemsArr[i];
	delete[] m_itemsArr;
}

/*
Function name:Maaraz
The input: Maaraz & m
The ouput: -
The function operation:copy constructor
*/
Maaraz::Maaraz(Maaraz & m):Basis(m)
{
	m_maarazColor = m.m_maarazColor;
	m_productNum = m.m_productNum;
	//copy the array
	m_itemsArr = new char*[m_productNum];
	for (int i = 0; i<m_productNum; i++)
	{
		m_itemsArr[i] = new char[strlen(m.m_itemsArr[i] + 1)];
		strcpy(m_itemsArr[i], m.m_itemsArr[i]);
	}
}

/*
Function name:setProductNumber
The input: int
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Maaraz::setProductNumber(int num)
{
	if (num < 0)
	{
		throw string("Number of products cant be negative");
	}
	m_productNum = num;
}

/*
Function name:setColors
The input: int
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Maaraz::setColors(int color)
{
	if (color < 0)
		throw string ("Number of colors cant be negative");
	m_maarazColor = color;
}

/*
Function name:set
The input: int
The ouput: -
The function operation:ask from the user all the base quetions and use the set functions to set the data members
*/
void Maaraz::set(int num)throw (const char*)
{
	Basis::set(num);
	int num1, color;
	cout << "Enter number of colors" << endl;
	cin >> color;
	setColors(color);
	cout << "Enter number of products" << endl;
	cin >> num1;
	setProductNumber(num1);
	m_itemsArr = new char*[m_productNum];
	cout << "Enter items names" << endl;
	char name[30];
	for (int i = 0; i<m_productNum; i++) 
	{
		cin >> name;
		m_itemsArr[i] = new char[strlen(name) + 1];
		strcpy(m_itemsArr[i], name);
	}
}

/*
Function name:getPrice
The input: -
The ouput: -
The function operation:calculate the price
*/
double Maaraz::getPrice(int publish)
{
	return ((Basis::getPrice(publish) * 2)*m_productNum + (m_maarazColor / 3));
}

/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Maaraz::print()
{
	Basis::print();
	for (int i = 0; i < m_productNum; i++)
		cout << " " << m_itemsArr[i];
	cout << "(" << m_productNum << "," << m_maarazColor << ")";
	cout << endl;
}
