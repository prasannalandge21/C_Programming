/*
    ALGORITHM

    START
        accept number as iNo
        if iNo < 0 then
            iNo = -iNo
        for i from 1 to iNo / 2 do
            if iNo % i == 0 AND (i % 2 == 0 OR i == 1) then
                print i
    STOP
*/

///////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayFactor
// Description : It is used to print factors of a number which are even or 1
// Input : Integer
// Output : Integer
// Author : Prasanna Shamsundar Landge
// Date : 21/10/2025
//
///////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i == 0) && ((i % 2 == 0) || (i == 1)))
        {
            printf("%d ", i); // Added a space to match the output format
        }
    }
    printf("\n"); // Add a newline for clean output
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point function for the Application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    
    scanf("%d",&iValue);
    
    DisplayFactor(iValue);
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Testcase Succefully handle by the the application
// Input : 24   Output : 1 2 4 6 8 12
//
///////////////////////////////////////////////////////////////////////////
