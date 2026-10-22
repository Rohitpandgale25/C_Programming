#include<stdio.h>
/*
////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Description   : Prints all even numbers from 1 to the given number
// Input         : Integer
// Output        : None (prints even numbers to the screen)
// Author        : Rohit Gokul Pandgale
// Date          : 21/10/2026
//
////////////////////////////////////////////////////
*/
void PrintEven(int iNo)
{
    int iCnt=1;
    if(iNo <= 0)
    {
        return;
    }
    else
    {
        while(iCnt<=iNo)
        {
            if(iCnt%2==0)
            {
                printf("%d",iCnt);
            }
            iCnt++;
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}
