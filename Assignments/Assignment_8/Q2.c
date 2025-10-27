/*
    ALGORITHM

    START
        accept number from user as iNo
        if iNo is less than 0
            convert iNo to positive
        if iNo is greater than 9
            print "Invalid Number"
            return
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
// Function name : Display
// Description : It is used to accept number from user and display it in words.
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 26/10/2025
//
///////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    // Handle negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo > 9)
    {
        printf("Invalid Number\n");
        return;
    }

    switch(iNo)
    {
        case 0: printf("Zero\n"); break;
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 4: printf("Four\n"); break;
        case 5: printf("Five\n"); break;
        case 6: printf("Six\n"); break;
        case 7: printf("Seven\n"); break;
        case 8: printf("Eight\n"); break;
        case 9: printf("Nine\n"); break;
    }
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
    Display(iValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 9
// Output : Nine
// Input : -3
// Output : Three
// Input : 12
// Output : Invalid Number
//
////////////////////////////////////////////////////////////////////////////