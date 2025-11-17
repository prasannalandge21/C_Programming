#include <stdio.h>
#include <stdlib.h> // Added for malloc and free

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    // Logic: Iterate and print numbers that are
    // strictly greater than iStart and strictly less than iEnd.
    // Note: The example [85 66 3 76 93 88] with range 60-90
    // giving output [66 76 88] seems to have a typo, as 85
    // also fits this range. This logic implements the stated rule.
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if ((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0; // Corrected duplicate iValue1
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the starting point: ");
    scanf("%d", &iValue1);

    printf("Enter the ending point: ");
    scanf("%d", &iValue2);

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

    // Corrected: Function is void, no assignment to iRet
    Range(p, iSize, iValue1, iValue2);

    free(p);
    return 0;
}