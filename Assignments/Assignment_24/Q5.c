#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;
    int iDigit = 0;
    int iNo = 0;

    // Logic: Outer loop iterates through the array.
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = 0;
        iNo = Arr[iCnt];

        // Good practice: handle negative numbers
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        // Inner loop calculates sum of digits for one number
        while (iNo > 0)
        {
            iDigit = iNo % 10; // Get last digit
            iSum = iSum + iDigit; // Add to sum
            iNo = iNo / 10;  // Remove last digit
        }
        
        // Handle the case where the number itself is 0
        if (Arr[iCnt] == 0)
        {
             printf("0 ");
        }
        else
        {
            printf("%d ", iSum);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0; // Removed unused iRet
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize); // Corrected iLength to iSize
    for (iCnt = 0; iCnt < iSize; iCnt++) // Corrected iLength to iSize
    {
        // Corrected: Moved scanf inside the loop
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);
    return 0;
}