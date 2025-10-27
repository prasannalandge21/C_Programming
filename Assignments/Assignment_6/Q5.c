/*
    ALGORITHM

    START
        accept total marks from user as iTotal
        accept obtained marks from user as iObtained
        call Percentage(iTotal, iObtained)
        print the percentage result on screen
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
// Function name : Percentage
// Description : It is used to calculate percentage of obtained marks.
// Input : Integer, Integer
// Output : Float
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    if(iTotal == 0)
    {
        return 0.0f;
    }
    
    float fResult = (((float)iObtained / (float)iTotal) * 100.0f);
    return fResult;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.2f%%\n", fRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : Total Marks = 1000, Obtained Marks = 745
// Output : Percentage is: 74.50%
//
///////////////////////////////////////////////////////////////////////////
