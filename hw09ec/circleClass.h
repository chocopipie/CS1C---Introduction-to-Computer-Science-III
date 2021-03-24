/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09ec : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include "shapeClass.h"

class circleClass: public shapeClass
{
	public:

    /************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/ 

/******************************************************
 * Constructor circleClass: Class circleClass
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set by default
 * ****************************************************/
  circleClass();
   

/******************************************************
 * Constructor circleClass: Class circleClass
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
  circleClass(int radius);


/******************************************************
 * Destructor ~circleClass: Class circleClass
 * ___________________________________________________
 * This terminates instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The object will be destructed automatically
 * ****************************************************/
  ~circleClass();


    /******************
    **** MUTATORS ****
    ******************/

/******************************************************
 * Method UpdateDimensions: Class circleClass
 * ___________________________________________________
 * This method updates the dimensions of obj cirClass
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  r = radius
 * ****************************************************/
void UpdateDimensions() override;


  /*******************
   **** ACCESSORS ****
   *******************/

/******************************************************
 * Method Print: Class circleClass
 * ___________________________________________________
 * This method prints the dimensions of obj circleClass.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  print the dimensions of circleClass
 * ****************************************************/
void Print() const;


private:
  int r;    //radius
};