/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09ec : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "shapeClass.h"

shapeClass::shapeClass()
{
	x = 0;
	y = 0;
}


shapeClass::shapeClass(int side1, int side2)
{
	x = side1;
	y = side2;
}


shapeClass::~shapeClass() {}


void shapeClass::setX(int size1)
{
	x = size1;
}


void shapeClass::setY(int size2)
{
	y = size2;
}


void shapeClass::UpdateDimensions() 
{
	int size;

	cout << "Enter side 1: ";
	cin >> size;
	x = size;

	cout << "Enter side 2: ";
	cin >> size;
	y = size;

		cout << "\nSHAPE UPDATED...\n";
}


void shapeClass::Print() const
{
	cout << "\nSHAPE's DIMENSIONS:\n";
	cout << "Side 1: " << x;
	cout << "\nSide 2: " << y << endl;
}


int shapeClass::Move(int location) const
{
	return location;
}

int shapeClass::getSide1()  const
{
	return x;
}


int shapeClass::getSide2() const
{
	return y;
}


