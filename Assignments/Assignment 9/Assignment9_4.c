////////////////////////////////////////////////////////////
//
//  Function Name: OddFactorial
//  Description  : Calculates odd factorial of given number
//  Input        : Integer
//  Output       : Integer
//  Date         : 02/11/2026
//  Author       : Rohit Gokul Pandgale
//
////////////////////////////////////////////////////////////
#include<stdio.h>

long long OddFactorial(int iNo)
{
    int iCnt = 0;
    long long iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    long long iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %lld", iRet);

    return 0;
}