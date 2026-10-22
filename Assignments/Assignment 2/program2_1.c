#include<stdio.h>
/*
////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays a specified number of asterisks
// Input         : Integer
// Output        : (prints asterisks to the screen)
// Author        : Rohit Gokul Pandgale
// Date          : 21/10/2026
//
////////////////////////////////////////////////////
*/
void Display(int iNo)
{
    int iCnt=0;
    while(iCnt<iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}
