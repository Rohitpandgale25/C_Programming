#include<stdio.h>

void pattern(int iNo)
{

    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo*2;iCnt++)
    {
        if(iCnt % 2==1)
        {
            printf("$\t");
        }
        else
        {
            printf("*\t");
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter a number\n");
    scanf("%d",&iValue);
     pattern(iValue);
    return 0;
}