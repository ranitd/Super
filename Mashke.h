/* ranit delevkovitz 205781701 05 targil3*/
#pragma once
#ifndef Mashke
#define MASHKE_H
#include "Halav.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>

class Mashke :public Halav {
public:
	//default constructor
	Mashke();
	//default distructor
	~Mashke();
	//copy constructor
	Mashke(Mashke &m);
	//calculate price
	void set(int num)throw (const char*);
	//calculate price
	double getPrice(int publish);
	//print
	void print();
};

#endif // !Mashke
