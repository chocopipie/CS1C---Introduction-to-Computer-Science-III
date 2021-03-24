/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09ec : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "circleClass.h"

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
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set according to the
 * parameter
 * ****************************************************/  
  rectangleClass(int length, int width);


/******************************************************
 * Destructor ~rectangleClass: Class rectangleClass
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
 * Method UpdateDimensions: Class rectangleClass
 * ___________________________________________________
 * This method prompts user for new length and width
 * and updates the dimensions of obj rectangeClass
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  x = length, y = width
 * ****************************************************/
void UpdateDimensions() override;


  /*******************
   **** ACCESSORS ****
   *******************/

/******************************************************
 * Method Print: Class rectangleClass
 * ___________________________________________________
 * This method prints the dimensions of obj 
 * rectangleClass.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  print the dimensions of rectangleClass
 * ****************************************************/
void Print() const;


};