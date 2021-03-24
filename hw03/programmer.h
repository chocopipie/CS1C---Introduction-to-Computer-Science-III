/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW03 : CLASS CONSTRUCTORS, INHERITANCE & INIT
 *****************************************************************************/
#include "employee.h"

class ProgrammerClass : public EmployeeClass
{
	public:
	/************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/ 

/******************************************************
 * Constructor ProgrammerClass: Class ProgrammerClass
 * ___________________________________________________
 * This creates a default instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The member variables are set by default
 * ****************************************************/
ProgrammerClass();
   

/******************************************************
 * Constructor ProgrammerClass: Class ProgrammerClass
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
ProgrammerClass(string perName, 
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
				bool perCPlusPlus,
				bool perJava);


/******************************************************
 * Destructor ~ProgrammerClass: Class ProgrammerClass
 * ___________________________________________________
 * This terminates instance of the class
 * ___________________________________________________
 * PRE-CONDITIONS
 *  <none>
 * 
 * POST-CONDITIONS
 *  The object will be destructed automatically
 * ****************************************************/
~ProgrammerClass();


    /******************
     **** MUTATORS ****
    ******************/

/******************************************************
 * Method SetDepartmentNum: Class ProgrammerClass
 * ___________________________________________________
 * This method sets the department number
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj ProgrammerClass
 * 
 * POST-CONDITIONS
 *  member variable department number is set
 * ****************************************************/
void SetDepartmentNum(int perDepartmentNum);


/******************************************************
 * Method SetSupervisor: Class ProgrammerClass
 * ___________________________________________________
 * This method sets the supervisor's name
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj ProgrammerClass
 * 
 * POST-CONDITIONS
 *  member variable supervisor name is set
 * ****************************************************/
void SetSupervisor(string perSupervisor);


/******************************************************
 * Method SetPercentage: Class ProgrammerClass
 * ___________________________________________________
 * This method sets the percentage of last salary
 * increase
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj ProgrammerClass
 * 
 * POST-CONDITIONS
 *  member variable percentage change is set
 * ****************************************************/
void SetPercentage(int perPercentage);


/******************************************************
 * Method SetCPlusPlus: Class ProgrammerClass
 * ___________________________________________________
 * This method sets the state of C++ knowledge
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj ProgrammerClass
 * 
 * POST-CONDITIONS
 *  member variable C++ knowledge is set
 * ****************************************************/
void SetCPlusPlusKnow(bool perCPlusPlus);


/******************************************************
 * Method SetJava: Class ProgrammerClass
 * ___________________________________________________
 * This method sets the state of Java knowledge
 * ___________________________________________________
 * PRE-CONDITIONS
 *  obj ProgrammerClass
 * 
 * POST-CONDITIONS
 *  member variable Java knowledge is set
 * ****************************************************/
void SetJava(bool perJava);


    /*******************
    **** ACCESSORS ****
    *******************/

/******************************************************
 * Method PrintProgrammer: Class ProgrammerClass
 * ___________________________________________________
 * This method prints out all information of the 
 * programmer.
 * ___________________________________________________
 * PRE-CONDITIONS
 *  none
 * 
 * POST-CONDITIONS
 *  all info related to the programmer is printed on the 
 * screen
 * ****************************************************/
void PrintProgrammer();

	private:
	int departmentNum;
	string supervisorName;
	int raisePercentage;
	bool cPlusPlusKnow;
	bool JavaKnow;
};