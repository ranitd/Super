/* ranit delevkovitz 205781701 05 targil3*/
#pragma once
#ifndef Pri
#define PRI_H
#include "Haklai.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>

class Pri :public Haklai {
private:
	int m_sugar;
public:
	//default constructor
	Pri();
	//default distructor
	virtual ~Pri();
	//copy constructor
	Pri(Pri &p);
	//set and check correctnes
	void setSugar(int sugar);
	//calculate price
	void set(int num)throw (const char*);
	//calculate price
	double getPrice(int publish);
	//print
	void print();
};

#endif // !Pri

