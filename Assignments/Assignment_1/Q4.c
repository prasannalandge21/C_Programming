/*
    ALGORITHM

    START
        accept number from user as iValue
        Divide iValue by 5 and check the remainder
        if remainder is 0
            then print "Divisible by 5" on screen
        otherwise                                  
            print "Not Divisible by 5" on screen
    STOP
*/

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////
//
// Function name : Check
// Description : It is used to check whether the number is divisible by 5 or not.
// Input : Integer
// Output : Boolean
// Author : Prasanna Shamsundar Landge
// Date : 19/10/2025
//
///////////////////////////////////////////////////////////////////////////

bool Check(int iNo)                                 // Input
{
    if ((iNo % 5) == 0)                             // Business Logic
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;                                 // To accept user input
    bool bRet = false;                              // To store the result

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = Check(iValue);                           // Method call

    if (bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}                                                   // End of main

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 25       Output : Divisible by 5
// Input : 7        Output : Not Divisible by 5
//
///////////////////////////////////////////////////////////////////////////