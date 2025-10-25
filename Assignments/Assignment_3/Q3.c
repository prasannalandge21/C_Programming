/*
    ALGORITHM

    START
        accept number as iNo
        if iNo < 0 then
            iNo = -iNo
        for i from 1 to iNo do
            if iNo % i == 0 AND i % 2 == 0 then
                print i
    STOP
*/

///////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayEvenFactor
// Description : It is used to print even factors of a number
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if(((iNo % i) == 0) && ((i % 2) == 0))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    DisplayEvenFactor(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 36   Output : 2 4 6 12 18 36
//
///////////////////////////////////////////////////////////////////////////
