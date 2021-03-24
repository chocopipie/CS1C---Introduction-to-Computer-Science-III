/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW04 : OPERATOR OVERLOADING & FRIEND FUNCTIONS
 *****************************************************************************/
#include "programmer.h"

ProgrammerClass::ProgrammerClass()
{
	departmentNum = 0;
	supervisorName = "";
	raisePercentage = 0;
	cPlusPlusKnow = 0;
	JavaKnow = 0;
}

ProgrammerClass::ProgrammerClass(string perName, 
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
								bool perJava)
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
	departmentNum = perDepartmentNum;
	supervisorName = perSupervisor;
	raisePercentage = perPercentage;
	cPlusPlusKnow = perCPlusPlus;
	JavaKnow = perJava;
}


ProgrammerClass::~ProgrammerClass()
{}


void ProgrammerClass::SetDepartmentNum(int perDepartmentNum)
{
	departmentNum = perDepartmentNum;
}


void ProgrammerClass::SetSupervisor(string perSupervisor)
{
	supervisorName = perSupervisor;
}


void ProgrammerClass::SetPercentage(int perPercentage)
{
	raisePercentage = perPercentage;
}


void ProgrammerClass::SetCPlusPlusKnow(bool perCPlusPlus)
{
	cPlusPlusKnow = perCPlusPlus;
}


void ProgrammerClass::SetJava(bool perJava)
{
	JavaKnow = perJava;
}


void ProgrammerClass::PrintProgrammer()
{
	string stateOfCKnow;   // state of C++ knowledge (yes or no)
	string stateOfJKnow;   // state of Java knowledge (yes or no)

	if (cPlusPlusKnow == true)
	{
		stateOfCKnow = "Yes";
	}
	else
	{
		stateOfCKnow = "No";
	}

	if (JavaKnow == true)
	{
		stateOfJKnow = "Yes";
	}
	else
	{
		stateOfJKnow = "No";
	}

	cout << left;
    cout << setw(15) << "Name " << setw(16) << "Department" << setw(19) << "Supervisor's Name"
    << setw(11) << "Raise % " << setw(15) << "C++ Knowledge" << setw(15) << "Java Knowledge\n";
    
    cout << setw(15) << name << setw(16) << departmentNum << setw(19) << supervisorName 
    << setw(11) << raisePercentage << setw(15) << stateOfCKnow << setw(15) << stateOfJKnow 
	<< endl << endl; 
}


string ProgrammerClass::GetPhoneNumber()
{
	return phoneNumber;
}

bool operator== (EmployeeClass &currentEmployee, ProgrammerClass &currentProgrammer)
{
    return (currentEmployee.GetPhoneNumber() == currentProgrammer.GetPhoneNumber());
}