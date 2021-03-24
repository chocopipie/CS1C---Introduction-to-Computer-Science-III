/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW09 : ABSTRACT CLASSES & VIRTUAL FUNCTIONS
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


  /*******************
   **** ACCESSORS ****
   *******************/

/******************************************************
 * Method calcPerimeter: Class shapeClass
 * ___________________________________________________
 * This method is a pure virtual member method to the
 * methods that calculate the parameter.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  makes shapeClass the abc
 * ****************************************************/
  virtual double calcPerimeter() const = 0;


/******************************************************
 * Method calcArea: Class shapeClass
 * ___________________________________________________
 * This method is a pure virtual member method to the
 * methods that calculate the area.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  makes shapeClass the abc
 * ****************************************************/
  virtual double calcArea() const = 0;


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

