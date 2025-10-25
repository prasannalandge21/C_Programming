/*
    ALGORITHM

    START
        accept number as iNo
        if iNo is less than 0 then
            convert iNo to positive
        initialize iSumFactors to 0
        initialize iSumNonFactors to 0
        for i from 1 to iNo-1 do
            if iNo modulo i equals 0 then
                add i to iSumFactors
            else
                add i to iSumNonFactors
        return iSumFactors minus iSumNonFactors
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
// Function name : FactDiff
// Description : It is used to calculate difference between summation of factors and non-factors of given number
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int i = 0;
    int iSumFactors = 0;
    int iSumNonFactors = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) == 0)
        {
            iSumFactors = iSumFactors + i;
        }
        else
        {
            iSumNonFactors = iSumNonFactors + i;
        }
    }
    return iSumFactors - iSumNonFactors;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    iRet = FactDiff(iValue);
    printf("Difference is: %d\n", iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 12   Output : -34
// Input : 10   Output : -29
//
///////////////////////////////////////////////////////////////////////////
