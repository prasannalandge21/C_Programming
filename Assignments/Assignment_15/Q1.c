#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return 1; // 0 is an even digit
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("%d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 2395     Output : 1
// Input : 1018     Output : 2
// Input : -1018    Output : 2
// Input : 9000     Output : 4
//
///////////////////////////////////////////////////////////////////////////////
