/*
    ALGORITHM

    START
        accept two numbers from user as iNo1 and iNo2
        call ChkEqual(iNo1, iNo2)
        if ChkEqual returns true
            print "Equal" on screen
        else
            print "Not Equal" on screen
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
// Function name : ChkEqual
// Description : It is used to check whether the two numbers are equal or not.
// Input : Integer, Integer
// Output : Boolean
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 10 10
// Output : Equal
// Input : 10 12
// Output : Not Equal
// Input : -10 10
// Output : Not Equal
//
///////////////////////////////////////////////////////////////////////////
