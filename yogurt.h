
#pragma once
#ifndef Yogurt
#define YOGURT_H
#include "Halav.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>

class Yogurt :public Halav {
public:
	//default constructor
	Yogurt();
	//default distructor
	virtual ~Yogurt();
	//copy constructor
	Yogurt(Yogurt &y);
	//calculate price
	void set(int num)throw (const char*);
	//calculate price
	double getPrice(int publish);
	//print
	void print();
};

#endif // !Yogurt
