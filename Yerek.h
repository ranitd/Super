
#pragma once
#ifndef Yerek
#define YEREK_H
#include "Haklai.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>

class Yerek :public Haklai {
private:
	int m_vitamin;
public:
	//default constructor
	Yerek();
	//default distructor
	virtual ~Yerek();
	//copy constructor
	Yerek(Yerek & y);
	//set and check correctnes
	void setVitamin(int vit);
	//calculate price
	void set(int num)throw (const char*);
	//calculate price
	double getPrice(int publish);
	//print
	void print();
};

#endif // !Yerek
