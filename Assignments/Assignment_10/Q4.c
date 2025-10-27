/*
    ALGORITHM

    START 
        Accept temperature in Fahrenheit from user as fTemp
        Create one variable as dRet to store return value
        Call FhtoCs by passing number as fTemp
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
// Function Name: FhtoCs
// Description  : To convert Fahrenheit to Celsius
// Input        : Float
// Output       : Double
// Author       : Prasanna Shamsundar Landge
// Date         : 27/10/2025
//
///////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    // Logic
    // Formula: (Fahrenheit - 32) * (5/9)
    return (fTemp - 32.0) * (5.0 / 9.0);
}

//////////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fValue);
    dRet = FhtoCs(fValue);
    printf("Temperature in Celsius is %lf\n", dRet);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed
// Input : 10
// Output : -12.222222
// Input : 34
// Output : 1.111111
//
///////////////////////////////////////////////////////////////////////////////
