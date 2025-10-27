/*
    ALGORITHM

    START
        accept number from user as iNo
        if iNo is negative then
            convert it into positive
        repeat iNo times
            print "$ *"
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
// Description : It is used to accept number from user and print pattern "$ *" that number of times.
// Input : Integer
// Output : Pattern
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    // Handle negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 0; i < iNo; i++)
    {
        printf("$ * \t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 5
// Output : $ *    $ *    $ *    $ *    $ *
// Input : 3
// Output : $ *    $ *    $ *
// Input : -3
// Output : $ *    $ *    $ *
//
///////////////////////////////////////////////////////////////////////////