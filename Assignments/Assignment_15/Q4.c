#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1; // Initialize multiplication to 1

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return 0; // Multiplication of digits in 0 is 0
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        // Handle the case where a zero is present in the number
        if(iDigit == 0)
        {
            iMult = 0;
            break; // Product will be 0, no need to continue
        }
        
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    printf("%d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 2395     Output : 270
// Input : 1018     Output : 8
// Input : 9440    Output : 144
// Input : 922432     Output : 860
//
///////////////////////////////////////////////////////////////////////////////