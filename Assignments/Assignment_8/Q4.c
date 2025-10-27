/*
    ALGORITHM

    START
        accept number from user as iNo
        if iNo is less than 0
            convert iNo to positive
        if iNo is equal to 0
            return
        for i from 1 to 10
            print iNo multiplied by i   
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
// Function name : Table
// Description : It is used to accept number from user and display its table.
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    // Handle negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return;
    }

    for(int i = 1; i <= 10; i++)
    {
        printf("%d\t", iNo * i);
    }
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    Table(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 5
// Output : 5 10 15 20 25 30 35 40 45 50
// Intput : 2
// Output : 2 4 6 8 10 12 14 16 18 20
// Input : -5
// Output : 5 10 15 20 25 30 35 40 45 50
//
/////////////////////////////////////////////////////////////////////////////