#include <stdio.h>
#include <stdlib.h>

/*
////////////////////////////////////////////////////
//
// Function Name : CheckMultipleDivisibility
// Description   : Checks whether a number is divisible by both 3 and 5, only 3, only 5, or neither
// Input         : Integer
// Output        : None (prints the divisibility result)
// Author        : Rohit Gokul Pandgale
// Date          : 22/10/2026
//
////////////////////////////////////////////////////
*/

void CheckMultipleDivisibility(int iValue)
{
    if ((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by Both\n");
    }
    else if (iValue % 3 == 0)
    {
        printf("Divisible by 3 Only\n");
    }
    else if (iValue % 5 == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}