/*
////////////////////////////////////////////////////
//
// Function Name : CheckEven
// Description   : Checks whether a number is even or odd
// Input         : Integer
// Output        : BOOL (TRUE if even, otherwise FALSE)
// Author        : Rohit Gokul Pandgale
// Date          : 21/10/2026
//
////////////////////////////////////////////////////
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckEven(int iNo)
{
    if((iNo%2)==0)
    return TRUE;
    else
    return FALSE;
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);

    if(bRet == TRUE)
        printf("Even number");
    else
        printf("Odd number");

     return 0;
}
