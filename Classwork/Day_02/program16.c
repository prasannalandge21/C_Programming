//////////////////////////////////////////////////////////////////////////////
///////////////
//
// Required Header files
//
//////////////////////////////////////////////////////////////////////////////
///////////////

#include<stdio.h>                           // For Input Output
#include<stdbool.h>                         // For bool datatype

//////////////////////////////////////////////////////////////////////////////
///////////////
//
// Function name : checkEvenOdd
// Description : It is used to check even or odd
// Input : Interger
// Output : Boolean
// Author : Prasanna Shamsundar Landge
// Date : 10/10/2025
//
//////////////////////////////////////////////////////////////////////////////
///////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////
///////////////
//
// Enter point function of the application
//
//////////////////////////////////////////////////////////////////////////////
///////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);
    
    printf("Result is : %d\n",bRet);

    if(bRet == true)
    {   printf("%d is Even Number\n",iValue);  }
    else
    {   printf("%d is Even Number\n",iValue);   }
    
    return 0;
}