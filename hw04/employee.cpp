/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW04 : OPERATOR OVERLOADING & FRIEND FUNCTIONS
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


string EmployeeClass::GetPhoneNumber()
{
    return phoneNumber;
}


int EmployeeClass::GetAge()
{
    return age;
}


EmployeeClass EmployeeClass::operator+(int AdditionalAge)
{
    this->SetAge(this->GetAge() + AdditionalAge);
    cout << AdditionalAge << " years have been added to the age of " 
    << this->name;
    return *this;
}

ostream& operator<<(ostream& osObj, const EmployeeClass& newEmployee)
{
    osObj << endl;
    osObj << left;
    osObj << setw(17) << "Name " << setw(16) << "Employee's id" << setw(16) << "Phone"
    << setw(6) << "Age " << setw(9) << "Gender" << setw(16) << "Job title" 
    << setw(11) << "Salary " << "Hire Date\n";
    
   osObj << setw(17) << newEmployee.name << setw(16) << newEmployee.id << setw(16) << newEmployee.phoneNumber 
    << setw(6) << newEmployee.age << setw(9) << newEmployee.gender << setw(16) << newEmployee.jobTitle << '$' << setw(10) 
    << newEmployee.salary << newEmployee.hireDate.getMonth() << "/" << newEmployee.hireDate.getDay()
    << "/" << newEmployee.hireDate.getYear();
    osObj << endl; 

    //newEmployee.hireDate.PrintDate();
    return osObj;
}

istream& operator>>(istream& isObj, EmployeeClass& newEmployee)
{
    string tempstring;
    int tempint;
    char tempchar;
    int month;
    int day;
    int year;

    cout << endl;
    cout << "Enter name: ";
    getline(isObj, tempstring);
    newEmployee.SetName(tempstring);

    cout << "Enter ID: ";
    isObj >> tempint;
    newEmployee.SetID(tempint);
    isObj.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Enter Phone Number: ";
    getline(isObj, tempstring);
    newEmployee.SetPhoneNumber(tempstring);

    cout << "Enter Age: ";
    isObj >> tempint;
    newEmployee.SetAge(tempint);
    isObj.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter gender: ";
    isObj.get(tempchar);
    newEmployee.SetGender(tempchar);
    isObj.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter job title: ";
    getline(isObj, tempstring);
    newEmployee.SetJobTitle(tempstring);

    cout << "Enter salary: ";
    isObj >> tempint;
    newEmployee.SetSalary(tempint);
    isObj.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter date: ";
    isObj >> month >> day >> year;
    newEmployee.SetHireDate(month, day, year);
    isObj.ignore(numeric_limits<streamsize>::max(), '\n'); 

    return isObj;
}

// pre-increment operator
EmployeeClass EmployeeClass::operator++()
{
    age++;
    return *this;
}
  
// post-increment operator
EmployeeClass EmployeeClass::operator++(int)
{
    EmployeeClass temp(*this);
    ++(*this);
    return temp;
}



