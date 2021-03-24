/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW04 : OPERATOR OVERLOADING & FRIEND FUNCTIONS
 *****************************************************************************/
#include "architect.h"

int main()
{
    bool EqualNumber;         // state of equality of 2 phone numbers
    EmployeeClass firstEmployee;
    EmployeeClass secondEmployee("Jimmy Fallon", 
                                12345, 
                                "949-555-1234", 
                                40, 
                                'M', 
                                "Comedian", 
                                100000, 
                                31, 8, 2014);

    
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

    
    EqualNumber = operator== (secondEmployee, secondProgrammer);

    if (EqualNumber == 1)
    {
        cout << "The phone numbers are correct";
    }
    else
    {
        cout << "The phone numbers are incorrect. Change...\n";
        secondEmployee.SetPhoneNumber(secondProgrammer.GetPhoneNumber());
    }
    cout << secondEmployee.GetPhoneNumber() << endl << endl;

    secondEmployee = secondEmployee + 5;
    cout << endl << "New Age: ";
    cout << secondEmployee.GetAge();

    cout << endl;

    cin >> firstEmployee;
    cout << firstEmployee;   

    cout << endl;

    secondEmployee++;
    cout << "Post Increment Operator: ";
    cout << "Age++ : " << secondEmployee.GetAge();

    ++secondEmployee;
    cout << "\nPre Increment Operator: ";
    cout << "++Age : " << secondEmployee.GetAge();

    /* The post increment (i++) will create a copy of this object, increase the value of
    it and returns the copy. The pre increment (++i) will increase the value and return
    that object.  => Post-increment incurs more overhead   */

    return 0;
}