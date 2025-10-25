/*
    ALGORITHM

    START
        accept three numbers as x, y and z
        if x greater than or equal to y AND x greater than or equal to z then
            return x
        else if y greater than or equal to x AND y greater than or equal to z then
            return y
        else
            return z
    STOP
*/

///////////////////////////////////////////////////////////////////////////
//
// Required Header files
//
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function name : FindLargest
// Description : It is used to find the largest of three numbers
// Input : Three Integers
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int a, b, c, result;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    result = FindLargest(a, b, c);
    printf("Largest number is: %d\n", result);
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 10 20 15   Output : Largest number is: 20
// Input : -5 -2 -8   Output : Largest number is: -2
//
///////////////////////////////////////////////////////////////////////////