/*
    ALGORITHM

    START
        accept number from user as iNo
        call ChkGreater(iNo)
        if ChkGreater returns true
            print "Greater" on screen
        else
            print "Smaller" on screen
    STOP
*/

///////////////////////////////////////////////////////////////////////////
//
// Required Header files
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////
//
// Function name : ChkGreater
// Description : It is used to check whether the number is greater than 100 or not.
// Input : Integer
// Output : Boolean
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number: ");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 101
// Output : Greater
// Input : 39
// Output : Smaller
//
///////////////////////////////////////////////////////////////////////////
