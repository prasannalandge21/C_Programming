
/*
    ALGORITHM

    START
        accept first number as no1
        accept second number as no2
        if the input is negative then convert into positive
        Perform the addition of no1 & no2
        Display the addition on screen
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
// Function name : AddionTwoNumbers
// Description : It is used to perform addition
// Input : Float , Float
// Output : Float
// Author : Prasanna Shamsundar Landge
// Date : 09/10/2025
//
///////////////////////////////////////////////////////////////////////////

float AddionTwoNumbers(
                            float fNo1,                // first input
                            float fNo2                 // second input
                      )
{
    float fSum = 0.0f;                                 // To store the result

    if(fNo1 < 0.0f)                                    // Updater
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                    // Updater
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                                // Business logic

    return fSum;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;               // To accept user input
    float fRet = 0;                                     // To store the result

    printf("Enter First number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AddionTwoNumbers(fValue1,fValue2);           // Method call

    printf("Addition is  : %f\n",fRet);
    
    return 0;
}   // End of main

///////////////////////////////////////////////////////////////////////////
//
// Testcases Succefully handle by the the application
// Input : 10.5     Input : 3.2     Ouput : 13.7
// Input : -10.5     Input : 3.2     Ouput : 13.7
// Input : 10.5     Input : -3.2     Ouput : 13.7
// Input : -10.5     Input : -3.2     Ouput : 13.7
// Input : 10.5     Input : 0.0    Ouput : 10.7
//
///////////////////////////////////////////////////////////////////////////