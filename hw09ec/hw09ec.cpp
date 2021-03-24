/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09 : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "rectangleClass.h"

void printPerimeter(shapeClass* Object);
void printArea(shapeClass* Object);

int main()
{
	shapeClass* myTriangleB = new triangleClass;
	shapeClass* myRectangleB = new rectangleClass;

	if (triangleClass* myTriangleD = dynamic_cast<triangleClass*>(myTriangleB))
	{
		myTriangleD->setTriangle();
		printPerimeter(myTriangleD);
		cout << endl;
		printArea(myTriangleD);
		cout << endl;
	}

	if (rectangleClass* myRectangleD = dynamic_cast<rectangleClass*>(myRectangleB))
	{
		myRectangleD->setRectangle();
		printPerimeter(myRectangleD);
		cout << endl;
		printArea(myRectangleD);
		cout << endl;
	}	
	
	return 0;
}


void printPerimeter(shapeClass* Object)
{
	cout << "Perimeter: " << fixed << setprecision(2) << Object->calcPerimeter();
}


void printArea(shapeClass* Object)
{
	cout << "Area: " << fixed << setprecision(2) << Object->calcArea();
}
