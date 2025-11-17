#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    // Logic: Iterate from the start.
    // The first time the number is found, return its index.
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    // If the loop finishes, the number was not found. Return -1.
    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0; // Removed duplicate iRet
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number to search: ");
    scanf("%d", &iValue);

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

    iRet = FirstOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number is at index %d\n", iRet);
    }

    free(p);
    return 0;
}