#include<stdio.h>

int Count(int iNo) // Name is CountLess6 or similar, but using 'Count' as per source
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return 1; // 0 is less than 6
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);
    printf("%d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 2395     Output : 3
// Input : 1018     Output : 3
// Input : 96672    Output : 1
// Input : 9440     Output : 3
//
///////////////////////////////////////////////////////////////////////////////
