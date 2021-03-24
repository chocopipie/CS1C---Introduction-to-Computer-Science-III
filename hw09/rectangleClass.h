/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09 : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "triangleClass.h"

class rectangleClass: public shapeClass
{
	 public:

    /************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/ 

/******************************************************
 * Constructor rectangleClass: Class rectangleClass
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set by default
 * ****************************************************/
  rectangleClass();
   

/******************************************************
 * Constructor rectangleClass: Class rectangleClass
 * ___________________________________________________
 * This creates a instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  the rectangleClass obj
 * 
 * POST-CONDITIONS
 *  The member variables are set according to the
 * parameter
 * ****************************************************/  
  rectangleClass(int length, int width);


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
  ~rectangleClass();


     /******************
    **** MUTATORS ****
    ******************/

/******************************************************
 * Method setRectangle: Class rectangleClass
 * ___________________________________________________
 * This method prompts user for 2 sides of the rectangle
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  update x, y
 * ****************************************************/
void setRectangle();


   /*******************
    **** ACCESSORS ****
    *******************/

/******************************************************
 * Method calcPerimeter: Class rectangleClass
 * ___________________________________________________
 * This method is an overridden virtual member method 
 * from shapeClass that calculates the perimeter.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  calculates and returns the perimeter of the rectangle
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
 *  calculates and returns the area of the rectangle
 * ****************************************************/
  double calcArea() const override;
};