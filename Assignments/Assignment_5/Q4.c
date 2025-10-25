/*
    ALGORITHM

    START
        accept number as num
        if num greater than 0 then
            print "The number is Positive"
        else if num less than 0 then
            print "The number is Negative"
        else
            print "The number is Zero"
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
// Function name : CheckNumberType
// Description : It is used to check whether the given number is positive, negative or zero
// Input : Integer
// Output : Void
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("The number is Positive.\n");
    }
    else if (num < 0)
    {
        printf("The number is Negative.\n");
    }
    else
    {
        printf("The number is Zero.\n");
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
    CheckNumberType(number);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 10   Output : The number is Positive.
// Input : -5   Output : The number is Negative.
// Input : 0    Output : The number is Zero.
//
///////////////////////////////////////////////////////////////////////////