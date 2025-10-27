/*
    ALGORITHM

    START 
        Accept number from user as No
        Create one variable as iRet to store return value
        Call CircleArea by passing number as No
        Store the return value into iRet
        Print the value of iRet
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
// Function Name: CircleArea
// Description  : To calculate area of circle
// Input        : Float
// Output       : Double
// Author       : Prasanna Shamsundar Landge
// Date         : 27/10/2025
//
///////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    // Logic
    const float PI = 3.14f;
    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }
    return PI * fRadius * fRadius;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter radius\n");
    scanf("%f",&fValue);
    dRet = CircleArea(fValue);
    printf("Area of circle is %lf\n", dRet);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed
// Input : 5.3
// Output : 88.2026
// Input : 10.4
// Output : 339.6224
//
//////////////////////////////////////////////////////////////////////////