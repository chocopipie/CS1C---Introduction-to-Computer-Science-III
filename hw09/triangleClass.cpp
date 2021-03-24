/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09 : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "triangleClass.h"

triangleClass::triangleClass()
{
	z = 0;
}


triangleClass::triangleClass(int side1, int side2, int side3)
							: shapeClass(side1, side2)
{
	z = side3;
}


triangleClass::~triangleClass() {}


void triangleClass::setTriangle()
{
	int side;

	cout << "Enter side 1: ";
	cin >> side;
	setX(side);

	cout << "Enter side 2: ";
	cin >> side;
	setY(side);

	cout << "Enter side 3: ";
	cin >> side;
	z = side;
}


double triangleClass::calcPerimeter() const
{
	return getSide1() + getSide2() + z;
}


double triangleClass::calcArea() const
{
	double halfPerimeter;
	double areaSquare;
	halfPerimeter = calcPerimeter() / 2;
	areaSquare = halfPerimeter*(halfPerimeter-getSide1())*(halfPerimeter-getSide2())*(halfPerimeter-z);

	return sqrt(areaSquare);
}