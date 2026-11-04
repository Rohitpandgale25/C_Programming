////////////////////////////////////////////////////////////
//
//  Function Name: Number
//  Description  : Checks whether number is small, medium or large
//  Input        : Integer
//  Output       : Void
//  Date         : 02/11/2026
//  Author       : Rohit Gokul Pandgale
//
////////////////////////////////////////////////////////////
#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
    else
    {
        printf("Number is exactly 50 or 100");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}