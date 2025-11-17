#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;

    if (iLength == 0)
    {
        return 0;
    }

    // Logic: Initialize both min and max to the first element.
    iMin = Arr[0];
    iMax = Arr[0];

    // Iterate once, checking for both new min and new max.
    for (iCnt = 1; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    // Return the difference.
    return (iMax - iMin);
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0; // Removed duplicate iRet and unused iValue
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    // Removed the unnecessary scan for iValue

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize); // Corrected iLength to iSize
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Difference is %d\n", iRet);

    free(p);
    return 0;
}