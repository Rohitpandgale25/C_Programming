////////////////////////////////////////////////////////////
//
//  Function Name: CircleArea
//  Description  : Calculates area of a circle
//  Input        : Float
//  Output       : Double
//  Date         : 02/11/2026
//  Author       : Rohit Gokul Pandgale
//
////////////////////////////////////////////////////////////
#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf", dRet);

    return 0;
}