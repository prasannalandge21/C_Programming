/*
    ALGORITHM

    START 
    Accept number from user as No
    Create one counter as iCnt and initialize to 0  
    If No is less than 0
        Then
            Convert No into positive number
    Loop iCnt from 1 to No
        Print "*"
    Loop iCnt from 1 to No
        Print "#"
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
// Function Name: Display
// Description  : To display '*' and '#' based on user input
// Input        : Integer
// Output       : None
// Author       : Prasanna Shamsundar Landge
// Date         : 27/10/2025
//
///////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    // Logic
    int iCnt = 0;
    // Updater to handle negative input
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
//
// Entry point function
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return0;
}

//////////////////////////////////////////////////////////////////////////
//
// Test Cases Passed Successfully
// Input : 5
// Output: *	*	*	*	*	#	#	#	#	#
// Input : 6
// Output: *	*	*	*	*	*	#	#	#	#	#	#
// Input : -5
// Output: *	*	*	*	*	#	#	#	#	#
// Input : 2
// Output: *	*	#	#
//
///////////////////////////////////////////////////////////////////////////