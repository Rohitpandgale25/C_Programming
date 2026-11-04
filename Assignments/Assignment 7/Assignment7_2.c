////////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Displays numbers from 1 to given number
//  Input        : Integer
//  Output       : Void
//  Date         : 02/11/2026
//  Author       : Rohit Gokul Pandgale
//
////////////////////////////////////////////////////////////
#include <stdio.h>
void display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d",iCnt);
    }
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);

    display(iValue);
    return 0;

}