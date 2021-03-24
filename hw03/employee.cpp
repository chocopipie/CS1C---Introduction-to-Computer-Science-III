/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW03 : CLASS CONSTRUCTORS, INHERITANCE & INIT
 *****************************************************************************/
#include "employee.h"

EmployeeClass::EmployeeClass()
{
    name = "";
    id = 0;
    phoneNumber = "";
    age = 0;
    gender = ' ';
    jobTitle = "";
    salary = 0;
}

EmployeeClass::EmployeeClass(string perName, 
                  int perID, 
                  string perPhoneNumber, 
                  int perAge, 
                  char perGender, 
                  string perJobTitle, 
                  int perSalary, 
                  int dDay,
                  int dMonth,
                  int dYear)
                  : hireDate(dMonth, dDay, dYear)
{
    name = perName;
    id = perID;
    phoneNumber = perPhoneNumber;
    age = perAge;
    gender = perGender;
    jobTitle = perJobTitle;
    salary = perSalary;
}


EmployeeClass::~EmployeeClass()
{}


void EmployeeClass::SetName(string perName)
{
    name = perName;
}


void EmployeeClass::SetID(int perID)
{
    id = perID;
}


void EmployeeClass::SetPhoneNumber(string perPhoneNumber)
{
    phoneNumber = perPhoneNumber;
}


void EmployeeClass::SetAge(int perAge)
{
    age = perAge;
}


void EmployeeClass::SetGender(char perGender)
{
    gender = perGender;
}


void EmployeeClass::SetJobTitle(string perJobTitle)
{
    jobTitle = perJobTitle;
}


void EmployeeClass::SetSalary(int perSalary)
{
    salary = perSalary;
}


void EmployeeClass::SetHireDate(int perMonth, int perDay, int perYear)
{
    hireDate.setDate(perMonth, perDay, perYear);
}


void EmployeeClass::PrintEmployee()
{
    cout << left;
    cout << setw(17) << "Name " << setw(16) << "Employee's id" << setw(16) << "Phone"
    << setw(6) << "Age " << setw(9) << "Gender" << setw(16) << "Job title" 
    << setw(11) << "Salary " << "Hire Date\n";
    
   cout << setw(17) << name << setw(16) << id << setw(16) << phoneNumber 
    << setw(6) << age << setw(9) << gender << setw(16) << jobTitle << '$' << setw(10) 
    << salary;
    hireDate.PrintDate();
    cout << endl;
}

