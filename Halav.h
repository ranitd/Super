
#pragma once
#ifndef Halav
#define HALAV_H
#include "Basis.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>


class Halav :public Basis {
private:
	int m_kind, m_colorNum;
	double m_fatNum;
	char* m_name;
public:
	//default constructor
	Halav();
	//default constructor
	virtual ~Halav();
	//default constructor
	Halav(Halav & h);
	//set and check correctnes
	void setColor(int color);
	//set and check correctnes
	void setFat(double fat);
	//set all the members
	void set(int num)throw (const char*);
	//calculate price
	virtual double getPrice(int publish);
	//print
	virtual void print();
};

#endif // !Halav
