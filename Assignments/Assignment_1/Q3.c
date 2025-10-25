/*
    ALGORITHM

    START
        Create a variable i and initialize it to 5
        WHILE i is greater than or equal to 1
        Display the value of i
        Decrement the value of i by 1
    STOP
*/

///////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description : It is uesd to print numbers from 5 to 1.
// Input : None
// Output : None
// Author : Prasanna Shamsundar Landge
// Date : 19/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function to display numbers in reverse order
//
///////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;                              // Variable declaration
    i = 5;                                  // Variable Initialization

    while(i >= 1)                           // Business Logic
    {
        printf("%d ", i);                   // Print current number
        i--;                                // Decrement the counter
    }
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    Display();                              // Function call

    return 0;                               // End of main
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Output : 5 4 3 2 1
// 
///////////////////////////////////////////////////////////////////////////