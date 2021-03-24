/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW03 : CLASS CONSTRUCTORS, INHERITANCE & INIT
 *****************************************************************************/
#include "programmer.h"

class ArchitectClass : public EmployeeClass
{
	public:
	/************************************
    ****  CONSTRUCTOR / DESTRUCTOR ****
    ***********************************/ 

ArchitectClass();
ArchitectClass(string perName, 
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
				int perExpYear);
~ArchitectClass();

    /******************
     **** MUTATORS ****
    ******************/

void SetDepartmentNum(int perDepartmentNum);
void SetSupervisor(string perSupervisor);
void SetPercentage(int perPercentage);
void SetExpYear(int perExpYear);


    /*******************
    **** ACCESSORS ****
    *******************/

void PrintArchitect();


	private:
	int departmentNumber;
	string supervisorName;
	int raisePercentage;
	int experienceYear;
};