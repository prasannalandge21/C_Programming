/*
    ALGORITHM

    START
        accept character as CValue
        if CValue is 'a' OR 'e' OR 'i' OR 'o' OR 'u' OR
           CValue is 'A' OR 'E' OR 'I' OR 'O' OR 'U' then
            return TRUE
        else
            return FALSE
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
// Function name : ChkVowel
// Description : It is used to check whether the character is vowel or not
// Input : Character
// Output : Boolean
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if( (CValue == 'a') || (CValue == 'e') || (CValue == 'i') || (CValue == 'o') || (CValue == 'u') ||
        (CValue == 'A') || (CValue == 'E') || (CValue == 'I') || (CValue == 'O') || (CValue == 'U') )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 'E'   Output : It is Vowel
// Input : 'd'   Output : It is not Vowel
//
///////////////////////////////////////////////////////////////////////////