/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW04 : OPERATOR OVERLOADING & FRIEND FUNCTIONS
 *****************************************************************************/
#include "lotto.h"

class EmployeeClass
{
  friend ostream& operator<<(ostream& osObj, const EmployeeClass& newEmployee);
  friend istream& operator>>(istream& isObj, EmployeeClass& newEmployee);
  
  public:

    /************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/ 

/******************************************************
 * Constructor EmployeeClass: Class EmployeeClass
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set by default
 * ****************************************************/
  EmployeeClass();
   

/******************************************************
 * Constructor EmployeeClass: Class EmployeeClass
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
  EmployeeClass(string perName, 
                  int perID, 
                  string perPhoneNumber, 
                  int perAge, 
                  char perGender, 
                  string perJobTitle, 
                  int perSalary, 
                  int dDay,
                  int dMonth,
                  int dYear);


/******************************************************
 * Destructor ~EmployeeClass: Class EmployeeClass
 * ___________________________________________________
 * This terminates instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The object will be destructed automatically
 * ****************************************************/
  ~EmployeeClass();



    /******************
     **** MUTATORS ****
    ******************/

/******************************************************
 * Method SetName: Class EmployeeClass
 * ___________________________________________________
 * This method sets the name
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj EmployeeClass
 * 
 * POST-CONDITIONS
 *  member variable name is set
 * ****************************************************/
  void SetName(string perName);


/******************************************************
 * Method SetID: Class EmployeeClass
 * ___________________________________________________
 * This method sets the id
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj EmployeeClass
 * 
 * POST-CONDITIONS
 *  member variable id is set
 * ****************************************************/
  void SetID(int perID);


/******************************************************
 * Method SetPhoneNumber: Class EmployeeClass
 * ___________________________________________________
 * This method sets the phone number
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj EmployeeClass
 * 
 * POST-CONDITIONS
 *  member variable phone number is set
 * ****************************************************/
  void SetPhoneNumber(string perPhoneNumber);


/******************************************************
 * Method SetAge: Class EmployeeClass
 * ___________________________________________________
 * This method sets the age
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj EmployeeClass
 * 
 * POST-CONDITIONS
 *  member variable age is set
 * ****************************************************/
  void SetAge(int perAge);


/******************************************************
 * Method SetGender: Class EmployeeClass
 * ___________________________________________________
 * This method sets the gender
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj EmployeeClass
 * 
 * POST-CONDITIONS
 *  member variable gender is set
 * ****************************************************/
void SetGender(char perGender);


/******************************************************
 * Method SetJobTitle: Class EmployeeClass
 * ___________________________________________________
 * This method sets the job title
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj EmployeeClass
 * 
 * POST-CONDITIONS
 *  member variable job title is set
 * ****************************************************/
void SetJobTitle(string perJobTitle);


/******************************************************
 * Method SetSalary: Class EmployeeClass
 * ___________________________________________________
 * This method sets the salary
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj EmployeeClass
 * 
 * POST-CONDITIONS
 *  member variable salary is set
 * ****************************************************/
void SetSalary(int perSalary);


/******************************************************
 * Method SetHireDate: Class EmployeeClass
 * ___________________________________________________
 * This method sets the hire date
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj EmployeeClass
 * 
 * POST-CONDITIONS
 *  member variable hire date is set
 * ****************************************************/
void SetHireDate(int perMonth, int perDay, int perYear);


   /*******************
    **** ACCESSORS ****
    *******************/

/******************************************************
 * Method PrintEmployee: Class EmployeeClass
 * ___________________________________________________
 * This method prints out all information of the 
 * employee.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  all info related to employee is printed on the 
 * screen
 * ****************************************************/
  void PrintEmployee();


/******************************************************
 * Method GetPhoneNumber: Class EmployeeClass
 * ___________________________________________________
 * This method returns the phone number of the 
 * employee.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  the phone number (string) is returned
 * ****************************************************/
  string GetPhoneNumber();


  /******************************************************
 * Method GetAge: Class EmployeeClass
 * ___________________________________________________
 * This method returns the age of the 
 * employee.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  the age (int) is returned
 * ****************************************************/
  int GetAge();


/******************************************************
 * Method AddAge+: Class EmployeeClass
 * ___________________________________________________
 * This method overloads operator + to add to the age
 * of the employee
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  the new age is added by the additional age.
 * ****************************************************/
  EmployeeClass operator+(int AdditionalAge);


  EmployeeClass operator++();
  EmployeeClass operator++(int);


  protected:
  string name;
  int id;
  string phoneNumber;
  int age;
  char gender;
  string jobTitle;
  int salary;
  Date hireDate;
};

