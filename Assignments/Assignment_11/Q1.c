/*
    ALGORITHM

    START 
    ACCEPT iStart, iEnd
        IF iStart > iEnd THEN
            PRINT "Invalid range"
            RETURN
        ENDIF

        FOR i FROM iStart TO iEnd DO
            PRINT i
        ENDFOR
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
// Function Name: RangeDisplay
// Description  : To display numbers from iStart to iEnd
// Input        : Integer, Integer
// Output       : None
// Author       : Prasanna Shamsundar Landge
// Date         : 28/10/2025
//
///////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    // Logic
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 23 35      Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
// Input : 10 18      Output : 10 11 12 13 14 15 16 17 18
// Input : 10 10      Output : 10
// Input : 90 18      Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////
