/* ranit delevkovitz 205781701 05 targil3*/
#pragma once
#ifndef Other
#define OTHER_H
#include "Halav.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>

class Other :public virtual Halav {
private:
	int m_parveNum;
	char** m_numsArr;
public:
	//default constructor
	Other();
	//default distructor
	virtual ~Other();
	//copy constructor
	Other(Other & o);	
	//set and check correctnes
	void setParve(int num);
	//calculate price
	void set(int num)throw (const char*);
	//calculate price
	double getPrice(int publish);
	//print
	void print();
};

#endif // !Other