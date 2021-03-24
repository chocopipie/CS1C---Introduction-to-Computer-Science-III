/******************************************************************************
 * Programmed by : Van Pham
 * Student ID : 1162826
 * CLASS : CS1C : TTh 12:30 - 2:50
 * HW04 : OPERATOR OVERLOADING & FRIEND FUNCTIONS
 *****************************************************************************/
#include "lotto.h"

Date::Date()
{
    month = 0;
    day = 0;
    year = 0;
}


Date::Date(int dMonth, int dDay, int dYear)
{
    month = dMonth;
    day = dDay;
    year = dYear;
}

Date::~Date() {}

void Date::setDate(int dMonth, int dDay, int dYear)
{
    month = dMonth;
    day = dDay;
    year = dYear;
}

int Date::getDay() const
{
    return day;
}

int Date::getMonth() const
{
    return month;
}

int Date::getYear() const
{
    return year;
}

void Date::PrintDate() 
{
    cout << month << "/" << day << "/" << year;
}
