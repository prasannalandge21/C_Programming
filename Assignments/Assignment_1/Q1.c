/*
    ALGORITHM

    START
        accept first number as no1
        accept second number as no2
        Perform the Division of no1 & no2
        Display the Division on screen
    STOP
*/

///////////////////////////////////////////////////////////////////////////
//
// Required Header files
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function name : DivisionTwoNumbers
// Description : It is used to perform Division
// Input : Integer , Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 19/10/2025
//
///////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)                  // first and second input
{
    int iAns = 0;                               // To store the result

    if(iNo2 == 0)                               // Updater
    {
        return -1; 
    }

    iAns = iNo1 / iNo2;                         // Business Logic

    return iAns;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;                  // To accept user input
    int iRet = 0;                                   // To store the result

    iRet = Divide(iValue1, iValue2);                // Method call

    printf("Division is %d", iRet);
}                                                   // End of main

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 15    Input : 5     Ouput : 3
//
///////////////////////////////////////////////////////////////////////////