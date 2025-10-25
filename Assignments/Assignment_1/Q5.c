/*
    ALGORITHM

    START
        accept number from user as iValue
        pass iValue to Accept function
        Accept function ,run a loop from 1 to iValue 
         in each iteration print "*" on screen
    STOP
*/

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function name : Accept
// Description : It is used to display "*" multiple times.
// Input : Integer , Integer
// Output : None
// Author : Prasanna Shamsundar Landge
// Date : 19/10/2025
//
///////////////////////////////////////////////////////////////////////////

void Accept(int iNo)                                    // Input    
{
    int iCnt = 0;                                       // Loop counter

    for (iCnt = 1; iCnt <= iNo; iCnt++)                 // Business Logic   
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;                                     // To accept user input
    printf("Enter number: ");                           
    scanf("%d", &iValue);                               

        Accept(iValue);                                 // Method call
        return  0;
    }                                                   // End of main

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Output : ***** (If user input is 5)
//
///////////////////////////////////////////////////////////////////////////