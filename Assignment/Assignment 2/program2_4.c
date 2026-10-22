/*
////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays a number for the specified frequency
// Input         : Integer, Integer
// Output        : (prints the number repeatedly)
// Author        : Rohit Gokul Pandgale
// Date          : 21/10/2026
//
////////////////////////////////////////////////////
*/
#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);
     printf("Enter a frequency:\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
        

}
