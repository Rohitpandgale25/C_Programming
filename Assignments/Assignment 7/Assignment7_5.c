////////////////////////////////////////////////////////////
//
//  Function Name: MultipleDisplay
//  Description  : Displays first five multiples of given number
//  Input        : Integer
//  Output       : Void
//  Date         : 02/11/2026
//  Author       : Rohit Gokul Pandgale
//
////////////////////////////////////////////////////////////
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}