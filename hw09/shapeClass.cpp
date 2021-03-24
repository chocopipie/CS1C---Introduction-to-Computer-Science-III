/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09 : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
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


int shapeClass::getSide1()  const
{
	return x;
}


int shapeClass::getSide2() const
{
	return y;
}
