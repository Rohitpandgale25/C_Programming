#include<stdio.h>
#include<stdlib.h>
/*
////////////////////////////////////////////////////
//
// Function Name : CheckDivisibility
// Description   : Checks whether a number is divisible by 5
// Input         : Integer
// Output        : (prints the divisibility result)
// Author        : Rohit Gokul Pandgale
// Date          : 22/10/2026
//
////////////////////////////////////////////////////
*/

void CheckDivisibility(int iNo)
{
    if((iNo % 5) == 0 )
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not Divisible by 5 \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
