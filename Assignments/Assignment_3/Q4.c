/*
    ALGORITHM

    START
        accept character as CValue
        if CValue is between 'a' and 'z' then
            convert CValue to uppercase
            print CValue
        else if CValue is between 'A' and 'Z' then
            convert CValue to lowercase
            print CValue
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
// Function name : DisplayConvert
// Description : It is used to convert case of character
// Input : Character
// Output : Character
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c\n", CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c\n", CValue + 32);
    }
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c", &cValue);
    DisplayConvert(cValue);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 'a'   Output : 'A'
// Input : 'D'   Output : 'd'
//
///////////////////////////////////////////////////////////////////////////