#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    // Handle negative input by making it positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Handle the case of iNo being 0 separately (not strictly needed 
    // for the loop but good practice for iNo=0 input if we want to print '0')
    if (iNo == 0)
    {
        printf("0\n");
        return;
    }
    
    // Loop continues as long as there are digits left
    while(iNo != 0)
    {
        iDigit = iNo % 10;          // Extract the last digit
        printf("%d\n", iDigit);     // Display the digit
        iNo = iNo / 10;             // Remove the last digit
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 2395     Output : 5 9 3 2
// Input : 1018     Output : 8 1 0 1
// Input : -1018    Output : 8 1 0 1
// Input : 9000     Output : 0 0 0 9
//
///////////////////////////////////////////////////////////////////////////////
