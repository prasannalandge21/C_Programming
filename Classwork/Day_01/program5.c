#include<stdio.h>

int AddionTwoNumbers(int iNo1 , int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;    // Business logic
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    iRet = AddionTwoNumbers(iValue1,iValue2);

    printf("Addition is  : %d\n",iRet);
    
    return 0;
}
