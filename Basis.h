/* ranit delevkovitz 205781701 05 targil3*/
#pragma once
#ifndef Basis
#define BASIS_H
#include <iostream>
using namespace std;
#include <cstring>
#include <string>


class Basis {
private:
	int m_serialNum;
	char m_rawPlace;
	int m_shelfPlace;
	int m_type;
	double m_quantity;
	int m_area;
public:
    //default constructor
	Basis();
	//default distructor
	virtual ~Basis();
	//copy constructor
	Basis(Basis &b);
	//get function
	int getSerielNum();
	//set and check correctnes
	void setSerialNum(int serialNum)throw (const char*);
	//set and check correctnes
	void setRawPlace(char raw)throw (const char*);
	//set and check correctnes
	void setShelfPlace(int shelf)throw (const char*);
	//set and check correctnes
	void setQuantity(double quantity)throw (const char*);
	//get function
	int getArea();
	//set and check correctnes
	void setArea(int area)throw (const char*);
	//set all the members
	virtual void set(int num)throw (const char*);
	//calculate price
	virtual double getPrice(int publish);
	//print
	virtual void print();
	


};
#endif // !Basis
