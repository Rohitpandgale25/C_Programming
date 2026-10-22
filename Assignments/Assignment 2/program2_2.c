/*
////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays asterisks based on the given number
// Input         : Integer
// Output        : (prints asterisks to the screen)
// Author        : Rohit Gokul Pandgale
// Date          : 21/10/2026
//
////////////////////////////////////////////////////
*/
#include<stdio.h>
void Display(int iNo)
{
    while (iNo > 0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
