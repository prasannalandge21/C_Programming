/*
    Step 1 : Understand the problem statement.
    Step 2 : Write the algorithm.
    Step 3 : Decide the programming language.
    Step 4 : Write the program
    Step 5 : Test the program
*/


/*
    ALGORITHM

    START
        accept first number as no1
        accept second number as no2
        Perform the addition of no1 & no2
        Display the addition on screen
    STOP
*/

#include<stdio.h>

float AddionTwoNumbers(float fNo1 , int fNo2)
{
    float fSum = 0;
    fSum = fNo1 + fNo2;    // Business logic
    return fSum;
}

int main()
{
    float fValue1 = 0, fValue2 = 0, fRet = 0;

    printf("Enter First number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AddionTwoNumbers(fValue1,fValue2);

    printf("Addition is  : %f\n",fRet);
    
    return 0;
}