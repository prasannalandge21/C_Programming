/*
    ALGORITHM

    START 
        Accept number from user as No
        Create one variable as iRet to store return value
        Call FactorialDiff by passing number as No
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
// Function Name: FactorialDiff
// Description  : To calculate difference between factorial of even and odd numbers
// Input        : Integer
// Output       : Integer
// Author       : Prasanna Shamsundar Landge
// Date         : 27/10/2025
//
///////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    // Logic
    int iEvenFact = 1;
    int iOddFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return iEvenFact - iOddFact;
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
    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d\n", iRet);
    return 0;
}

////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed
// Input : 5
// Output : -7
// Input : -5
// Output : 7
// Input : 10
// Output : 2895
//
////////////////////////////////////////////////////////////////////////

