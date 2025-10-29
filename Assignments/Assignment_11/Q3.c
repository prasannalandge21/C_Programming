/*
    ALGORITHM

    START 
    ACCEPT iStart, iEnd
        IF iStart > iEnd OR iStart < 0 THEN
            PRINT "Invalid range"
            RETURN
        ENDIF

        SET iSum = 0

        FOR i FROM iStart TO iEnd DO
            iSum = iSum + i
        ENDFOR

        PRINT iSum
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
// Function Name: RangeSum
// Description  : To calculate sum of numbers from iStart to iEnd
// Input        : Integer, Integer
// Output       : Integer
// Author       : Prasanna Shamsundar Landge
// Date         : 28/10/2025
//
///////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    // Logic
    int iSum = 0;
    if(iStart > iEnd || iStart < 0)
    {
        return -1; // Indicate invalid range
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        iSum = iSum + i;
    }
    return iSum;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 23 30     Output : 212
// Input : 10 18     Output : 126
// Input : 10 -2     Output : Invalid range
// Input : 90 18     Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////
