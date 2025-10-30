#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return 0; // 0 is not an odd digit
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);
    printf("%d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 2395     Output : 3
// Input : 1018     Output : 2
// Input : -1018    Output : -2
// Input : 9000     Output : 0
//
///////////////////////////////////////////////////////////////////////////////
