/*
////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : Displays a specified number of asterisks
// Input         : Integer
// Output        : (prints asterisks to the screen)
// Author        : Rohit Gokul Pandgale
// Date          : 21/10/2026
//
////////////////////////////////////////////////////
*/
#include <stdio.h>
void Accept(int iNo)
{
    int  iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue =0;
    iValue=5;
    Accept(iValue);
    return 0;
}
