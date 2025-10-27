/*
    ALGORITHM

    START 
        Accept number from user as No
        Create one variable as iRet to store return value
        Call EvenFactorial by passing number as No
        Store the return value into iRet
        Print the value of iRet
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
// Function Name: EvenFactorial
// Description  : To calculate factorial of even numbers
// Input        : Integer
// Output       : Integer
// Author       : Prasanna Shamsundar Landge
// Date         : 27/10/2025
//
///////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    // Logic
    int iCnt = 0;
    int iFact = 1;
    // Updater to handle negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = EvenFactorial(iValue);
    printf("Even Factorial of number is %d\n",iRet);
    return  0;
}

////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed
// Input : 5
// Output : 8
// Input : -5
// Output : 8
// Input : 10
// Output : 3840
//
////////////////////////////////////////////////////////////////////////

