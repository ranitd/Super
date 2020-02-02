
#pragma once
#ifndef Hanut
#define HANUT_H
#include "Basis.h"
#include "Yerek.h"
#include "Haklai.h"
#include "Pri.h"
#include "Gvina.h"
#include "Maaraz.h"
#include "yogurt.h"
#include "Other.h"
#include "Mashke.h"
#include "Halav.h"
#include <iostream>
using namespace std;
#include <cstring>
#include <string>


class Hanut {
private:
	int m_publish,m_productNum;
	char* m_name;
	Basis** m_products;
public:
	//default constructor
	Hanut(char* name);
	//default distructor
	~Hanut();
	//copy constructor
	Hanut(Hanut &h);
	//add product to array
	Basis* addProducts(int num);
	//increase size of array
	void increaseItems();
	//set and check correctnes
	int getProductsNum();
	//set and check correctnes
	void setPublish(int publish);
	//calculate price
	double getPrice();
	//print
	void print();
};

#endif // !#ifndef Hanut

