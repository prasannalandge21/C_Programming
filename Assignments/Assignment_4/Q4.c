/*
    ALGORITHM

    START
        accept number as iNo
        if iNo is less than 0 then
            convert iNo to positive
        initialize iSum to 0
        for i from 1 to iNo-1 do
            if iNo modulo i not equals 0 then
                add i to iSum
        return iSum
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
// Function name : SumNonFact
// Description : It is used to calculate summation of non-factors of given number
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int i = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) != 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
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
    iRet = SumNonFact(iValue);
    printf("Summation of non-factors is: %d\n", iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 12   Output : 50
// Input : 10   Output : 37
//
///////////////////////////////////////////////////////////////////////////