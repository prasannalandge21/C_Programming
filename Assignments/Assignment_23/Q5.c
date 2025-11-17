#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    // Logic: Iterate through the array.
    // If the number is found, return TRUE immediately.
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    // If the loop finishes without finding the number, return FALSE.
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

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
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if (bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);
    return 0;
}