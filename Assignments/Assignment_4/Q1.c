/*
    ALGORITHM

    START
        accept number as iNo
        if iNo is less than 0 then
            convert iNo to positive
        initialize iMult to 1
        for i from 1 to iNo/2 do
            if iNo modulo i equals 0 then
                multiply iMult by i
        return iMult
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
// Function name : MultFact
// Description : It is used to calculate multiplication of factors of given number
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i) == 0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is: %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 12   Output : 144
// Input : 10   Output : 10
// Input : 13   Output : 1
//
///////////////////////////////////////////////////////////////////////////