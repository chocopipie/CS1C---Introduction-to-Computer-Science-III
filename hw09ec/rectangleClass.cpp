/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09ec : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "rectangleClass.h"

rectangleClass::rectangleClass() {}


rectangleClass::rectangleClass(int length, int width)
								: shapeClass(length, width)
{}


rectangleClass::~rectangleClass() {}


void rectangleClass::UpdateDimensions() 
{
	int side;

	cout << "\nEnter length: ";
	cin >> side;
	setX(side);

	cout << "Enter side 2: ";
	cin >> side;
	setY(side);

	cout << "\nRECTANGLE UPDATED...\n";
}


void rectangleClass::Print() const
{
	cout << "\nRECTANGLE's DIMENSIONS:\n";
	cout << "Length: " << getSide1();
	cout << "\nWidth: " << getSide2() << endl;
}