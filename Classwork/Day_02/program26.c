#include<stdio.h>

// Dynamic Function

void Display( int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Shree Krishna...\n");
    
    }
}

int main()
{
    int iCount = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iCount);

    Display(iCount);

    return 0;
}

// Error in Code
