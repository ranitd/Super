#include "Other.h"

/*
Function name:Other
The input: -
The ouput: -
The function operation:default constructor
*/
Other::Other()
{
}

/*
Function name:~Other
The input: -
The ouput: -
The function operation:default distructor
*/
Other::~Other()
{
	for (int i = 0; i<m_parveNum; i++)
		delete[] m_numsArr[i];
	delete[] m_numsArr;
}

/*
Function name:Other
The input: Other & o
The ouput: -
The function operation:copy constructor
*/
Other::Other(Other & o) :Halav(o)
{
	m_parveNum = o.m_parveNum;
	m_numsArr = new char*[m_parveNum];
	for (int i = 0; i < m_parveNum; i++)
	{
		m_numsArr[i] = new char[strlen(o.m_numsArr[i] + 1)];
		strcpy(m_numsArr[i], o.m_numsArr[i]);
	}
}

/*
Function name:setParve
The input: int
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Other::setParve(int parve)
{
	if (parve < 0)
	{
		delete this;
		throw string("Num of ingridiants cant be negative");
	}
	m_parveNum = parve;
}

/*
Function name:set
The input: int
The ouput: -
The function operation:ask from the user all the base quetions and use the set functions to set the data members
*/
void Other::set(int num)throw (const char*)
{
	Halav::set(num);
	int num1;
	char name[30];
	cout << "Enter number of parve ingridiants" << endl;
	cin >> num1;
	setParve(num1);
	m_numsArr = new char*[m_parveNum];
	cout << "Enter ingridiants names" << endl;
	//get names of ingridiants
	for (int i = 0; i<m_parveNum; i++)
	{
		cin >> name;
		m_numsArr[i] = new char[strlen(name) + 1];
		strcpy(m_numsArr[i], name);
	}
}

/*
Function name:getPrice
The input: -
The ouput: -
The function operation:calculate the price
*/
double Other::getPrice(int publish)
{
	return (Halav::getPrice(publish) + m_parveNum * 5);
}

/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Other::print()
{
	Halav::print();
	 for (int i = 0; i < m_parveNum; i++)
		cout << m_numsArr[i] << " ";
	cout << " (" << m_parveNum << ")";
	cout << endl;
}
