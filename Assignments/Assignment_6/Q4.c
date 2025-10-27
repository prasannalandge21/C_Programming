/*
    ALGORITHM

    START
        accept three numbers from user as iNo1, iNo2 and iNo3
        call Multiply(iNo1, iNo2, iNo3)
        print the multiplication result on screen
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
// Function name : Multiply
// Description : It is used to multiply three numbers.
// Input : Integer, Integer, Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 0;
    iResult = iNo1 * iNo2 * iNo3;
    return iResult;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 5 4 7
// Output : Multiplication is: 140
// Input : 5 0 7
// Output : Multiplication is: 35
// Input : 5 0 0
// Output : Multiplication is: 5
// Input : 0 0 0
// Output : Multiplication is: 0
//
///////////////////////////////////////////////////////////////////////////
