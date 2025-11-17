#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    // Logic: Iterate through the array.
    // Add to iEvenSum if even, otherwise add to iOddSum.
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0) // Even
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else // Odd
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    // Return the difference as required.
    return (iEvenSum - iOddSum);
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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
    // Corrected loop variable from 'i' to 'iCnt'
    for (iCnt = 0; iCnt < iSize; iCnt++) // Corrected iLength to iSize
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d\n", iRet);

    free(p);
    return 0;
}