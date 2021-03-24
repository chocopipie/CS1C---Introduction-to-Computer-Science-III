/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW03 : CLASS CONSTRUCTORS, INHERITANCE & INIT
 *****************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Date 
{
public:

   /************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/    
   

/******************************************************
 * Constructor Date: Class Date
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  This function sets the date by default
 * ****************************************************/
Date();

/******************************************************
 * Constructor Date: Class Date
 * ___________________________________________________
 * This creates an instance of the class according to
 * parameter
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  day = Dday, month = dMonth, year = dYear
 * ****************************************************/
Date(int dMonth, int dDay, int dYear);


/******************************************************
 * Destructor ~Date: Class Date
 * ___________________________________________________
 * This terminates instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The object will be destructed automatically
 * ****************************************************/
~Date();



    /******************
     **** MUTATORS ****
    ******************/

/******************************************************
 * Method setDate: Class Date
 * ___________________________________________________
 * This method sets the date
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj date
 * 
 * POST-CONDITIONS
 *  member variables day, month, and year are set
 * ****************************************************/
void setDate(int dMonth, int dDay, int dYear);



    /*******************
     **** ACCESSORS ****
     *******************/

/******************************************************
 * Method getDay: Class Date
 * ___________________________________________________
 * This method returns the day
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  the valud of day is returned
 * ****************************************************/
int getDay() const;

/******************************************************
 * Method getMonth: Class Date
 * ___________________________________________________
 * This method returns the month
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  the value of month is returned
 * ****************************************************/
int getMonth() const;

/******************************************************
 * Method getYear: Class Date
 * ___________________________________________________
 * This method returns the year
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  the value of year is returned
 * ****************************************************/
int getYear() const;

/******************************************************
 * Method PrintDate: Class Date
 * ___________________________________________________
 * This method prints out the date.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  the date in the form mm-dd-yyyy is printed
 * ****************************************************/
void PrintDate();

private:
int month;
int day;
int year;

};