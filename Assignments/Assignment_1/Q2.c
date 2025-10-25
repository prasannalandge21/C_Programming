///////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description : It is uesd to print specific message multiple times.
// Input : None
// Output : None
// Author : Prasanna Shamsundar Landge
// Date : 19/10/2025
//
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

// Static Function

void Display()
{
    int i = 0;

    for(i = 1; i<= 5 ;i++)
    {
        printf("Marvellous\n");
    }
}

int main()

{
    Display();

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Output : Marvellous Marvellous Marvellous Marvellous Marvellous
//           
///////////////////////////////////////////////////////////////////////////