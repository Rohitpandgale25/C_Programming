////////////////////////////////////////////////////////////
//
//  Function Name: KMtoMeter
//  Description  : Converts kilometre into metre
//  Input        : Integer
//  Output       : Integer
//  Date         : 02/11/2026
//  Author       : Rohit Gokul Pandgale
//
////////////////////////////////////////////////////////////
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is %d", iRet);

    return 0;
}