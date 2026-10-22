#include<stdio.h>
#include<stdlib.h>
/*
////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Description   : Checks whether a number is even or odd
// Input         : Integer
// Output        : (prints whether the number is even or odd)
// Author        : Rohit Gokul Pandgale
// Date          : 22/10/2026
//
////////////////////////////////////////////////////
*/

void CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
