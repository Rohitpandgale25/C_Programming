
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CalculateBonus
//  Description  : Accept an employee's montly salary and completed years of sevice Calculate the bonus
//  Input        : Float , Integer
//  Output       : String , Integer
//  Date         : 22/10/2026
//  Author       : Rohit Gokul Pandgale
//
//////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    //Filter
    if((fSalary < 0.0f) || (iYears < 0))
    {
        printf("Invalid Input \n");
        return;
    }

    if(iYears > 10)
    {
        fBonus = (fSalary * 15) / 100;
        printf("Bonus = %.2f",fBonus);
    }
    else if((iYears <= 10) && (iYears >= 5))
    {
        fBonus = (fSalary * 10) / 100;
        printf("Bonus = %.2f",fBonus);
    }
    else if(iYears < 5)
    {
        fBonus = (fSalary * 5) / 100;
        printf("Bonus = %.2f",fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and Years of Service : \n");
    scanf("%f   %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}