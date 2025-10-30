#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo == 0) // Special case: 0 contains 0
    {
        return TRUE;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE; // Found a zero, exit immediately
        }
        iNo = iNo / 10;
    }
    
    return FALSE; // Loop completed without finding zero
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 2395     Output : There is no Zero
// Input : 1018     Output : It Contain Zero
// Input : -1018    Output : It Contain Zero
// Input : 9000     Output : It Contain Zero
//
///////////////////////////////////////////////////////////////////////////////