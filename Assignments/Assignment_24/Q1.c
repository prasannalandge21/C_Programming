#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = 0;

    // Logic: Assume the first element is the max.
    // Then iterate from the second element, updating max if a larger one is found.
    if (iLength == 0)
    {
        return 0; // Or handle error as appropriate
    }

    iMax = Arr[0];
    for (iCnt = 1; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(p, iSize);

    printf("Largest Number is %d\n", iRet);

    free(p);
    return 0;
}