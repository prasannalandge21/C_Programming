
/*
    ALGORITHM

    START 
        Accept width from user as fValue1
        Accept height from user as fValue2
        Create one variable as dRet to store return value
        Call RectArea by passing fValue1 and fValue2
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
// Function Name: RectArea
// Description  : To calculate area of rectangle
// Input        : Float, Float
// Output       : Double
// Author       : Prasanna Shamsundar Landge
// Date         : 27/10/2025
//
///////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    // Logic
    if(fWidth < 0)
    {
        fWidth = -fWidth;
    }
    if(fHeight < 0)
    {
        fHeight = -fHeight;
    }
    // Area = Width * Height
    return fWidth * fHeight;
}

//////////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
//////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;
    printf("Enter width\n");
    scanf("%f",&fValue1);
    printf("Enter height\n");
    scanf("%f",&fValue2);
    dRet = RectArea(fValue1, fValue2);
    printf("Area of rectangle is %lf\n", dRet);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed
// Input : 5.3 9.78
// Output : 51.834000
//
///////////////////////////////////////////////////////////////////////////////