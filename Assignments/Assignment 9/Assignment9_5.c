////////////////////////////////////////////////////////////
//
//  Function Name: FactorialDiff
//  Description  : Returns difference between even and odd factorial
//  Input        : Integer
//  Output       : Integer
//  Date         : 02/11/2026
//  Author       : Rohit Gokul Pandgale
//
////////////////////////////////////////////////////////////
#include<stdio.h>

long long FactorialDiff(int iNo)
{
    int iCnt = 0;
    long long iEvenFact = 1;
    long long iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0;
    long long iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %lld", iRet);

    return 0;
}