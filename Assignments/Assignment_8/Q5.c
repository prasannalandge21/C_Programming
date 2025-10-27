/*
    ALGORITHM

    START
        accept number from user as iNo
        if iNo is less than 0
            convert iNo to positive
        if iNo is equal to 0
            return
        for i from 10 down to 1
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
// Function name : TableRev
// Description : It is used to accept number from user and display its table in reverse order.
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
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

    for(int i = 10; i >= 1; i--)
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
    TableRev(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 2
// Output : 20 18 16 14 12 10 8 6 4 2
// Input : 5
// Output : 50 45 40 35 30 25 20 15 10 5
// Input : -5
// Output : 50 45 40 35 30 25 20 15 10 5
//
/////////////////////////////////////////////////////////////////////////////