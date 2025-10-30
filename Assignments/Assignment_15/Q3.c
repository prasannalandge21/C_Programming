#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return 0; // 0 is not in the range (3, 7)
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        // Check if the digit is > 3 AND < 7 (i.e., 4, 5, 6)
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);
    printf("%d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 2395     Output : 1
// Input : 1018     Output : 0
// Input : 4521    Output : 2
// Input : 9922    Output : 0
//
///////////////////////////////////////////////////////////////////////////////
