/*
    ALGORITHM

    START
        accept number as num
        if num modulo 2 equals 0 then
            print "num is an even number"
        else
            print "num is an odd number"
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
// Function name : CheckEvenOdd
// Description : It is used to check whether the given number is even or odd
// Input : Integer
// Output : Void
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    CheckEvenOdd(number);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 10   Output : 10 is an even number.
// Input : -3   Output : -3 is an odd number.
//
///////////////////////////////////////////////////////////////////////////