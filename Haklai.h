
#pragma once
#ifndef Haklai
#define HAKLAI_H
#include "Basis.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>

class Haklai :public virtual Basis {	
private:
	char* m_name;
	int m_seasonNum;
	int m_numSupplier;
	int m_kind;
public:
	//default constructor
	Haklai();
	//default distructor
	virtual ~Haklai();
	//copy constructor
	Haklai(Haklai &a);
	//set and check correctnes
	void setSeason(int season);
	//set and check correctnes
	void setSupplier(int supplier);
	//set all the members
	void set(int num)throw (const char*);
	//calculate price
	virtual double getPrice(int publish);
	//print
	virtual void print();

};

#endif // !Haklai
