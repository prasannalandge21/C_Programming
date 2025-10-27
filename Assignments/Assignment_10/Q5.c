/*
    ALGORITHM

    START 
        Accept area in square feet from user as iNo
        Create one variable as dRet to store return value
        Call SquareMeter by passing number as iNo
        Store the return value into dRet
        Print the value of dRet
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
// Function Name: SquareMeter
// Description  : To convert square feet to square meters
// Input        : Integer
// Output       : Double
// Author       : Prasanna Shamsundar Landge
// Date         : 27/10/2025
//
///////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    // Logic
    // 1 square feet = 0.0929 Square meters
    return iValue * 0.0929;
}

//////////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter area in square feet\n");
    scanf("%d",&iValue);
    dRet = SquareMeter(iValue);
    printf("Area in square meters is %lf\n", dRet);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed
// Input : 5
// Output : 0.464500
// Input : 7
// Output : 0.650300
//
///////////////////////////////////////////////////////////////////////////////