#include "Hanut.h"

/*
Function name:Hanut
The input: -
The ouput: -
The function operation:default constructor
*/
Hanut::Hanut(char* name)
{
	m_products = NULL;
	m_name = name;
	m_productNum = 0;
	m_publish = 0;
}

/*
Function name:~Hanut
The input: -
The ouput: -
The function operation:default distructor
*/
Hanut::~Hanut()
{
	for (int i = 0; i<m_productNum; i++)
		delete[] m_products[i];
	delete[] m_products;
}

/*
Function name:Hanut
The input: Hanut & h
The ouput: -
The function operation:copy constructor
*/
Hanut::Hanut(Hanut & h)
{
	m_productNum = h.m_productNum;
	m_publish = h.m_publish;
	m_name = h.m_name;
	//copy the array
	m_products = new Basis*[m_productNum];
	for (int i = 0; i < m_productNum; i++)
		m_products[i] = h.m_products[i];
	m_name = new char[strlen(h.m_name) + 1];
	strcpy(m_name, h.m_name);

}

/*
Function name:addProducts
The input: int
The ouput: Basis* b
The function operation:add product to the array of products
*/
Basis* Hanut::addProducts(int num)
{
	Basis*b = NULL;
	if (num > 7)
		throw string("there is no such product");
	//make a new product
	if (num == 1)
		b = new Yerek();
	if (num == 2)
		b = new Pri();
	if (num == 3)
		b = new Maaraz();
	if (num == 4)
		b = new Mashke();
	if (num == 5)
		b = new Yogurt();
	if (num == 6)
		b = new Gvina();
	if (num == 7)
		b = new Other();
	if (m_productNum == 0) {
		m_products = new Basis*[1];
		m_products[0] = b;
	}
	else
	{
		//make a new array with the new product
		Basis** newArray = new Basis*[m_productNum + 1];
		for (int i = 0; i<m_productNum; i++)
			newArray[i] = m_products[i];
		newArray[m_productNum] = b;
		delete[] m_products;
		//copy the bew array to the data member
		m_products = newArray;
	}
	int serial;
	cout << "Enter serial number" << endl;
	cin >> serial;
	//check that there is no such serial number
	for (int i = 0; i < getProductsNum(); i++)
	{
		if (serial == m_products[i]->getSerielNum())
			throw string("serial num already exist");
	}
	b->setSerialNum(serial);
	return b;
}

/*
Function name:increaseItems
The input: -
The ouput: -
The function operation: increase the size of the array
*/
void Hanut::increaseItems()
{
	m_productNum++;
}

/*
Function name:getProductsNum
The input: -
The ouput: int
The function operation: return the size of the array
*/
int Hanut::getProductsNum()
{
	return m_productNum;
}

/*
Function name:setPublish
The input: int
The ouput: -
The function operation:check correctness of the input and change the data memeber
*/
void Hanut::setPublish(int publish)
{
	if (publish < 0)
		throw string("factor cant be negative");
	m_publish = publish;
}

/*
Function name:getPrice
The input: -
The ouput: the total price
The function operation:calculate the total price of all the products in the array
*/
double Hanut::getPrice()
{
	double total = 0;
	for (int i = 0; i < m_productNum; i++)
		total += m_products[i]->getPrice(m_publish);
	return total;
}

/*
Function name:print
The input: -
The ouput: -
The function operation:print the data members
*/
void Hanut::print()
{
	cout << m_name << " " << m_productNum << " " << m_publish << " ";
	cout << endl;
	for (int i = 0; i < m_productNum; i++)
		m_products[i]->print();

}
