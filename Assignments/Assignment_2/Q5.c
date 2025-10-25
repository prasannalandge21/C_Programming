/*
    ALGORITHM

    START
        Accept one number from user as iNo
        Check whether that number is even or odd
        If the number is even
            Then print "Even number" on screen
        Otherwise
            Print "Odd number" on screen
    STOP
*/

//////////////////////////////////////////////////////////////
//
// Required Header files
// 
///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////////
//
// Function name : ChkEven
// Description : It is used to check whether the number is even or odd
// Input : Integer
// Output : Boolean
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////

// Function to check if a number is even
bool ChkEven(int iNo)
{
    // A number is even if the remainder after dividing by 2 is 0
    return (iNo % 2) == 0;
}

//////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    // Display result
    if (bRet == true)
    {
        printf("%d is an Even number\n", iValue);
    }
    else
    {
        printf("%d is an Odd number\n", iValue);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 4    Ouput : 4 is an Even number
// Input : 7    Ouput : 7 is an Odd number
//
///////////////////////////////////////////////////////////////////////////