/*
    ALGORITHM

    START
        accept year as yr
        if (yr modulo 4 equals 0 AND yr modulo 100 not equals 0) OR (yr modulo 400 equals 0) then
            print "yr is a Leap Year"
        else
            print "yr is not a Leap Year"
    STOP
*/

///////////////////////////////////////////////////////////////////////////
//
// Required Header files
//
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function name : CheckLeapYear
// Description : It is used to check whether the given year is a leap year or not
// Input : Integer
// Output : Void
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is not a Leap Year.\n", year);
    }
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int yr;
    printf("Enter year: ");
    scanf("%d", &yr);
    CheckLeapYear(yr);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 2020   Output : 2020 is a Leap Year.
// Input : 1900   Output : 1900 is not a Leap Year.
//
///////////////////////////////////////////////////////////////////////////