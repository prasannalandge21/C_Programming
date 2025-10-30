#include<stdio.h>

int CountDiff(int iNo) // Name is DiffEvenOdd or similar, but using 'CountDiff' as per source
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Special case for input 0: even sum 0, odd sum 0, difference 0
    if (iNo == 0)
    {
        return 0;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        
        iNo = iNo / 10;
    }
    
    return iSumEven - iSumOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 2395     Output : -15
// Input : 1018     Output : 6
// Input : 8440    Output : 16
// Input : 5733     Output :-18
//
///////////////////////////////////////////////////////////////////////////////
