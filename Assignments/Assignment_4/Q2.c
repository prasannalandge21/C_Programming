/*
    ALGORITHM

    START
        accept number as iNo
        if iNo is less than 0 then
            convert iNo to positive
        for i from iNo/2 down to 1 do
            if iNo modulo i equals 0 then
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
// Function name : FactRev
// Description : It is used to display factors of given number in reverse order
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo / 2; i >= 1; i--)
    {
        if((iNo % i) == 0)
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
    FactRev(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 12   Output : 6 4 3 2 1
// Input : 10   Output : 5 2 1
// Intput : 13   Output : 1
//
///////////////////////////////////////////////////////////////////////////