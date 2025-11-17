#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    // Logic: Check if the number is divisible by 3 AND 5.
    // This is the same as checking if it's divisible by 15.
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
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