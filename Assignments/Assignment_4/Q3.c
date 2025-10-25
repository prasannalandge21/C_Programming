/*
    ALGORITHM

    START
        accept number as iNo
        if iNo is less than 0 then
            convert iNo to positive
        for i from 1 to iNo-1 do
            if iNo modulo i not equals 0 then
                print i
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
// Function name : NonFact
// Description : It is used to display non-factors of given number
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int i = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) != 0)
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
    printf("Enter number: ");
    scanf("%d", &iValue);
    NonFact(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//  
// Testcase Succefully handle by the the application
// Input : 12   Output : 5 7 8 9 10 11
// Input : 10   Output : 3 4 6 7 8 9
// Input : 13   Output : 2 3 4 5 6 7 8 9 10 11 12
//
///////////////////////////////////////////////////////////////////////////