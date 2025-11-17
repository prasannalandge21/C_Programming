#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

// Corrected function signature typo [cite: 576]
void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    // Logic: Iterate and check if the number
    // is a multiple of 11.
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 11 == 0)
        {
            printf("%d ", Arr[iCnt]);
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

    Display(p, iSize);

    free(p);
    return 0;
}