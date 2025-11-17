#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = 0;

    // Logic: Assume the first element is the min.
    // Then iterate, updating min if a smaller one is found.
    if (iLength == 0)
    {
        return 0; // Or handle error
    }

    iMin = Arr[0];
    for (iCnt = 1; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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
    for (iCnt = 0; iCnt < iSize; iCnt++) // Corrected iLength to iSize
    {
        // Corrected: Moved scanf inside the loop
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Minimum(p, iSize);

    printf("Smallest Number is %d\n", iRet);

    free(p);
    return 0;
}