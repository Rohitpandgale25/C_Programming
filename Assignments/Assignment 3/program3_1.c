#include<stdio.h>
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