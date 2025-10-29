/*
    ALGORITHM

    START 
    ACCEPT iStart, iEnd
        IF iStart > iEnd THEN
            PRINT "Invalid range"
            RETURN
        ENDIF

        FOR i FROM iStart TO iEnd DO
            IF i MOD 2 == 0 THEN
                PRINT i
            ENDIF
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
// Function Name: RangeDisplayEven
// Description  : To display even numbers from iStart to iEnd
// Input        : Integer, Integer 
// Output       : None
// Author       : Prasanna Shamsundar Landge
// Date         : 28/10/2025
//
///////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    // Logic
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(int i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 23 35      Output : 24 26 28 30 32 34
// Input : 10 18      Output : 10 12 14 16 18
// Input : 10 10      Output : 10     
// Input : 90 18      Output : Invalid range
//
///////////////////////////////////////////////////////////////////////////