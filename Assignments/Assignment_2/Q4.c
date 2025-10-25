/*
    ALGORITHM

    START
        Accept one number from user as iNo
        Accept one number from user as iFrequency
        Display iNo on screen iFrequency times
    STOP
*/

///////////////////////////////////////////////////////////////////////////
//
// Required Header files
//
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description : It is used to print iNo on screen iFrequency times
// Input : Integer, Integer
// Output : Void
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Write Updater
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

///////////////////////////////////////////////////////////////////////////
// 
// Entry Point Function
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//  
// Testcase Succefully handle by the the application
// Input : 12 5   Output : 12  12  12  12  12
// Input : -2 3   Output : -2  -2  -2
// Input : 21 -3  Output : 21  21  21
// Input : -2 0   Output : 
//
/////////////////////////////////////////////////////////////////////////// 