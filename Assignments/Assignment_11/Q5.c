/*
    ALGORITHM

    START 
    ACCEPT iStart, iEnd
        IF iStart > iEnd THEN
            PRINT "Invalid range"
            RETURN
        ENDIF

        FOR i FROM iEnd DOWNTO iStart DO
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
// Function Name: RangeDisplayRev
// Description  : To display numbers from iEnd to iStart
// Input        : Integer, Integer
// Output       : None
// Author       : Prasanna Shamsundar Landge
// Date         : 28/10/2025
//
///////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    // Logic
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(int i = iEnd; i >= iStart; i--)
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 23 35      Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
// Input : 10 18      Output : 18 17 16 15 14 13 12 11 10
// Input : 10 10      Output : 10   
// Input : 10 -2     Output : -2 -1 0 1 2 3 4 5 6 7 8 9 10
// Input : 90 18      Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////