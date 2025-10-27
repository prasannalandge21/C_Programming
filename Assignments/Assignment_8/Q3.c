/*
    ALGORITHM

    START
        accept number from user as iNo
        if iNo is less than 0
            convert iNo to positive
        initialize iFact as 1
        for i from iNo down to 1
            multiply iFact by i
        return iFact
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
// Function name : Factorial
// Description : It is used to accept number from user and return its factorial.
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 1;
    
    // Handle negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = iNo; i > 0; i--)
    {
        iFact = iFact * i;
    }
    return iFact;
}

//////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);
    printf("Factorial of number is %d\n", iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 5
// Output : 120
// Input : -5
// Output : 120
// Input : 4
// Output : 24
//
////////////////////////////////////////////////////////////////////////////s