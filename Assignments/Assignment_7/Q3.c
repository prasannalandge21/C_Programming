/*
    ALGORITHM

    START
        accept number from user as iNo
        if iNo is negative then
            convert it into positive
        repeat from -iNo to +iNo
            print current index
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
// Function name : main
// Description : It is used to accept number from user and print numbers from -iNo to
// Input : Integer
// Output : Numbers
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    // Handle negative input by making it positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = -iNo; i <= iNo; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 4
// Output : -4    -3    -2    -1    0    1    2    3    4
//
////////////////////////////////////////////////////////////////////////////
