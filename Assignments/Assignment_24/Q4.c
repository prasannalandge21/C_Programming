#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    // Logic: Iterate and check if the number is
    // greater than or equal to 100 AND less than or equal to 999.
    // (Assuming positive numbers per the example)
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
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
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);
    return 0;
}