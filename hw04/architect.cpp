/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW04 : OPERATOR OVERLOADING & FRIEND FUNCTIONS
 *****************************************************************************/
#include "architect.h"

/******************************************************
 * Constructor ArchitectClass: Class ArchitectClass
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set by default
 * ****************************************************/
ArchitectClass::ArchitectClass()
{
    departmentNumber = 0;
    supervisorName = "";
    raisePercentage = 0;
    experienceYear = 0;
}
   

/******************************************************
 * Constructor ArchitectClass: Class ArchitectClass
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
ArchitectClass::ArchitectClass(string perName, 
                                int perID, 
                                string perPhoneNumber, 
                                int perAge, 
                                char perGender, 
                                string perJobTitle, 
                                int perSalary, 
                                int dDay,
                                int dMonth,
                                int dYear,
                                int perDepartmentNum,
                                string perSupervisor,
                                int perPercentage,
                                int perExpYear)
                                : EmployeeClass(perName, 
                                                perID, 
                                                perPhoneNumber, 
                                                perAge,
                                                perGender,
                                                perJobTitle,
                                                perSalary,
                                                dDay,
                                                dMonth,
                                                dYear)
{
	departmentNumber = perDepartmentNum;
    supervisorName = perSupervisor;
    raisePercentage = perPercentage;
    experienceYear = perExpYear;
}


/******************************************************
 * Destructor ~ArchitectClass: Class ArchitectClass
 * ___________________________________________________
 * This terminates instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The object will be destructed automatically
 * ****************************************************/
ArchitectClass::~ArchitectClass()
{}

    /******************
     **** MUTATORS ****
    ******************/

/******************************************************
 * Method SetDepartmentNum: Class ArchitectClass
 * ___________________________________________________
 * This method sets the department number
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj ArchitectClass
 * 
 * POST-CONDITIONS
 *  member variable department number is set
 * ****************************************************/
void ArchitectClass::SetDepartmentNum(int perDepartmentNum)
{
    departmentNumber = perDepartmentNum;
}


/******************************************************
 * Method SetSupervisor: Class ArchitectClass
 * ___________________________________________________
 * This method sets the supervisor's name
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj ArchitectClass
 * 
 * POST-CONDITIONS
 *  member variable supervisor name is set
 * ****************************************************/
void ArchitectClass::SetSupervisor(string perSupervisor)
{
    supervisorName = perSupervisor;
}


/******************************************************
 * Method SetPercentage: Class ArchitectClass
 * ___________________________________________________
 * This method sets the percentage of last salary
 * increase
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj ArchitectClass
 * 
 * POST-CONDITIONS
 *  member variable percentage change is set
 * ****************************************************/
void ArchitectClass::SetPercentage(int perPercentage)
{
    raisePercentage = perPercentage;
}


/******************************************************
 * Method SetExpYear: Class ArchitectClass
 * ___________________________________________________
 * This method sets the year of experience
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj ArchitectClass
 * 
 * POST-CONDITIONS
 *  member variable experience year is set
 * ****************************************************/
void ArchitectClass::SetExpYear(int perExpYear)
{
    experienceYear = perExpYear;
}


    /*******************
    **** ACCESSORS ****
    *******************/

/******************************************************
 * Method PrintArchitect: Class ArchitectClass
 * ___________________________________________________
 * This method prints out all information of the 
 * architect.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  all info related to the architect is printed on the 
 * screen
 * ****************************************************/
void ArchitectClass::PrintArchitect()
{
    cout << left;
    cout << setw(15) << "Name " << setw(16) << "Department" << setw(19) << "Supervisor's Name"
    << setw(11) << "Raise % " << setw(15) << "Years of experience\n";
      
    cout << setw(15) << name << setw(16) << departmentNumber << setw(19) << supervisorName 
    << setw(11) << raisePercentage << setw(15) << experienceYear << endl << endl;
}