/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09 : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "shapeClass.h"

class triangleClass: public shapeClass
{
	 public:

    /************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/ 

/******************************************************
 * Constructor triangleClass: Class triangleClass
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set by default
 * ****************************************************/
  triangleClass();
   

/******************************************************
 * Constructor triangleClass: Class triangleClass
 * ___________________________________________________
 * This creates a instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set according to the
 * parameter
 * ****************************************************/  
  triangleClass(int side1, int side2, int side3);


/******************************************************
 * Destructor ~triangleClass: Class triangleClass
 * ___________________________________________________
 * This terminates instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The object will be destructed automatically
 * ****************************************************/
  ~triangleClass();


   /******************
    **** MUTATORS ****
    ******************/

/******************************************************
 * Method setTriangle: Class triangleClass
 * ___________________________________________________
 * This method prompts user for 3 sides of the triangles
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  update x, y, z
 * ****************************************************/
void setTriangle();


   /*******************
    **** ACCESSORS ****
    *******************/

/******************************************************
 * Method calcPerimeter: Class triangleClass
 * ___________________________________________________
 * This method is an overridden virtual member method 
 * from shapeClass that calculates the perimeter.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  calculates and returns the perimeter of the triangle
 * ****************************************************/
  double calcPerimeter() const override;


/******************************************************
 * Method calcArea: Class shapeClass
 * ___________________________________________________
 * This method is an overriden member method from the
 * shapeClass that calculates the area.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  calculates and returns the area of the triangle
 * ****************************************************/
  double calcArea() const override;

private:
  int z;
};