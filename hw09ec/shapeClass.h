/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09ec : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
 *****************************************************************************/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;


class shapeClass
{
  public:

    /************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/ 

/******************************************************
 * Constructor shapeClass: Class shapeClass
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set by default
 * ****************************************************/
  shapeClass();
   

/******************************************************
 * Constructor shapeClass: Class chapeClass
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
  shapeClass(int side1, int side2);


/******************************************************
 * Destructor ~shapeClass: Class shapeClass
 * ___________________________________________________
 * This terminates instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The object will be destructed automatically
 * ****************************************************/
  ~shapeClass();


    /******************
    **** MUTATORS ****
    ******************/

/******************************************************
 * Method setX: Class shapeClass
 * ___________________________________________________
 * This method updates x
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  x = size1
 * ****************************************************/
  void setX(int size1);


/******************************************************
 * Method setY: Class shapeClass
 * ___________________________________________________
 * This method updates y
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  x = size2
 * ****************************************************/
  void setY(int size2);

/******************************************************
 * Method UpdateDimensions: Class shapeClass
 * ___________________________________________________
 * This method updates the dimensions of obj shapeClass
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  x = side1, y = side2
 * ****************************************************/
virtual void UpdateDimensions();


  /*******************
   **** ACCESSORS ****
   *******************/

/******************************************************
 * Method Print: Class shapeClass
 * ___________________________________________________
 * This method prints the dimensions of obj shapeClass.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  makes shapeClass the abc
 * ****************************************************/
void Print() const;


  /******************************************************
 * Method Move: Class shapeClass
 * ___________________________________________________
 * This method is a virtual member method that shows 
 * the number of movement.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  shows the number of movement
 * ****************************************************/
virtual int Move(int location) const;



/******************************************************
 * Method getSide1: Class shapeClass
 * ___________________________________________________
 * This method returns side 1 of the shape
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  returns side 1 (int)
 * ****************************************************/
int getSide1()  const;


/******************************************************
 * Method getSide2: Class shapeClass
 * ___________________________________________________
 * This method returns side 2 of the shape
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  returns side 2 (int)
 * ****************************************************/
int getSide2()  const;


private:
  int x;
  int y;
};
