/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09ec : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "circleClass.h"


circleClass::circleClass()
{
	r = 0;
}

circleClass::circleClass(int radius)
{
	r = radius;
}

circleClass::~circleClass() {}


void circleClass::UpdateDimensions()
{ 
	int radius;
	cout << "\nEnter radius: ";
	cin >> radius;
	r = radius;

	cout << "\nCIRCLE UPDATED...\n";
}



void circleClass::Print() const
{
	cout << "\nCIRCLE's DIMENSIONS:\n";
	cout << "Radius: " << r << endl;
}



