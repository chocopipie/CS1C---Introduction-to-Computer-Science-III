/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09 : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "rectangleClass.h"


rectangleClass::rectangleClass()
{}


rectangleClass::rectangleClass(int length, int width)
								: shapeClass(length, width)
{}


rectangleClass::~rectangleClass() {}


void rectangleClass::setRectangle()
{
	int side;

	cout << "Enter the length: ";
	cin >> side;
	setX(side);

	cout << "Enter the width: ";
	cin >> side;
	setY(side);
}


double rectangleClass::calcPerimeter() const
{
	return (getSide1() + getSide2()) * 2;
}


double rectangleClass::calcArea() const
{
	return getSide1() * getSide2();
}