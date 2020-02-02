
#pragma once
#ifndef Gvina
#define GVINA_H
#include "Halav.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>


class Gvina :public virtual Halav {
private:
	int m_add;
public:
	//default constructor
	Gvina();
	//default distructor
	virtual ~Gvina();
	//copy constructor
	Gvina(Gvina & g);
	//set and check correctnes
	void setAdd(int add);
	//set all the members
	void set(int num)throw (const char*);
	//calculate price
	double getPrice(int publish);
	//print
	void print();
};

#endif // !Gvina
