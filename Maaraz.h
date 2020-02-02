
#pragma once
#ifndef Maaraz
#define MAARAZ_H
#include "Basis.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>

class Maaraz :public Basis {
private:
	int m_productNum, m_maarazColor;
	char** m_itemsArr;
public:
	//default constructor
	Maaraz();
	//default distructor
	virtual ~Maaraz();
	//copy constructor
	Maaraz(Maaraz &m);
	//set and check correctnes
	void setProductNumber(int num);
	//set and check correctnes
	void setColors(int color);
	//calculate price
	void set(int num)throw (const char*);
	//calculate price
	double getPrice(int publish);
	//print
	void print();
};

#endif // !Maaraz

