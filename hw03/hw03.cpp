/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW03 : CLASS CONSTRUCTORS, INHERITANCE & INIT
 *****************************************************************************/
#include "architect.h"

int main()
{
    EmployeeClass firstEmployee;
    EmployeeClass secondEmployee("Jimmy Fallon", 
                                12345, 
                                "949-555-1234", 
                                40, 
                                'M', 
                                "Comedian", 
                                100000, 
                                31, 8, 2014);

    cout << "EMPLOYEES:\n\n";

    // Print the employee to the screen
    firstEmployee.PrintEmployee();     // print obj instantiated by default constructor
    secondEmployee.PrintEmployee();    // print obj instantiated by non default constructor

    // change employee's name
    secondEmployee.SetName("James Corden");
    // change employee's id
    secondEmployee.SetID(87654);
    //change employee's phone number
    secondEmployee.SetPhoneNumber("703-703-1234");
    // change employee's age
    secondEmployee.SetAge(37);
    //change employee's Gender
    secondEmployee.SetGender('F');
    // change employee's job title
    secondEmployee.SetJobTitle("Talk Show Host");
    // change employee's salary
    secondEmployee.SetSalary(900000);
    // change employee's date
    secondEmployee.SetHireDate(12, 25, 2014);

    // Print the employee after changing
    secondEmployee.PrintEmployee();

    cout << endl << endl;

    cout << "PROGRAMMERS:\n\n";

    ProgrammerClass firstProgrammer;
    ProgrammerClass secondProgrammer("Sam Software",
                                    54321, 
                                    "819-123-4567",
                                    21,
                                    'M',
                                    "Programmer", 
                                    223000, 
                                    24, 12, 2011, 
                                    5432122,
                                    "Joe Boss",
                                    4, 
                                    0,
                                    1);

    // Print the programmers to the screen
    firstProgrammer.PrintEmployee();       // obj instantiated by default constructor
    firstProgrammer.PrintProgrammer();
    secondProgrammer.PrintEmployee();      // obj instantiated by non default constructor
    secondProgrammer.PrintProgrammer();

    // change programmers's name
    secondProgrammer.SetName("Mary Coder");
    // change programmer's id
    secondProgrammer.SetID(65432);
    // change programmer's phone number
    secondProgrammer.SetPhoneNumber("310-555-5555");
    // change programmer's age
    secondProgrammer.SetAge(28);
    // change programmer's gender
    secondProgrammer.SetGender('F');
    // change programmer's job title
    secondProgrammer.SetJobTitle("Programmer");
    // change programmer's salary
    secondProgrammer.SetSalary(770123);
    // change programmer's hire date
    secondProgrammer.SetHireDate(02, 8, 2010);
    // change programmer's department number
    secondProgrammer.SetDepartmentNum(5432123);
    // change programmer's supervisor's name
    secondProgrammer.SetSupervisor("Mary Leader");
    // change raise % rate
    secondProgrammer.SetPercentage(7);
    // change c++ knowledge
    secondProgrammer.SetCPlusPlusKnow(true);
    // change Java knowledge
    secondProgrammer.SetJava(true);

    // Print the programmer after changing
    secondProgrammer.PrintEmployee();
    secondProgrammer.PrintProgrammer();

    cout << endl << endl;


    // print architects to the screen

    cout << "ARCHITECTS:\n\n";

	
    ArchitectClass firstArchitect;
    ArchitectClass secondArchitect("Alex Arch",
                                    88888,
                                    "819-123-4444",
                                    31,
                                    'M',
                                    "Architect",
                                    323000,
                                    24, 12, 2009,
                                    5434222,
                                    "Big Boss",
                                    5, 
                                    4);

    // print architect to the screen
    firstArchitect.PrintEmployee();      // print the obj instantiated by default constructor
    firstArchitect.PrintArchitect();
    secondArchitect.PrintEmployee();     // print the obj instantiated by non default constructor
    secondArchitect.PrintArchitect();

    // change architect's name
    secondArchitect.SetName("Sally Designer");
    // change architect's employee id
    secondArchitect.SetID(87878);
    // change architect's phone number
    secondArchitect.SetPhoneNumber("310-555-8888");
    // change architect's age
    secondArchitect.SetAge(38);
    // change architect's gender
    secondArchitect.SetGender('F');
    // change architect's job title
    secondArchitect.SetJobTitle("Architect");
    // change architect's salary
    secondArchitect.SetSalary(870123);
    // change architect's hire date
    secondArchitect.SetHireDate(02, 8, 2003);
    // change architect's department
    secondArchitect.SetDepartmentNum(6543422);
    // change architect's supervisor's name
    secondArchitect.SetSupervisor("Big Boss");
    // change architect's raise %
    secondArchitect.SetPercentage(8);
    // change architect's year of experience
    secondArchitect.SetExpYear(11);

    // print the architect after changing
    secondArchitect.PrintEmployee();
    secondArchitect.PrintArchitect();
    

    return 0;
}