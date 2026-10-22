/*
////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Description   : Checks whether a number is positive, negative or zero
// Input         : Integer
// Output        : (prints whether the number is positive, negative or zero)
// Author        : Rohit Gokul Pandgale
// Date          : 22/10/2026
//
////////////////////////////////////////////////////
*/
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf(" The Number Is Positive ");
    }
    else if(iNo < 0)
    {
        printf(" The Number Is Negative ");
    }
    else if(iNo == 0)
    {
        printf(" The Number Is Zero ");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}