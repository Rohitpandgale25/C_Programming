/*
////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description   : Converts an uppercase character to lowercase
//                 or a lowercase character to uppercase
// Input         : Character
// Output        : (prints the converted character)
// Author        : Rohit Gokul Pandgale
// Date          : 22/10/2026
//
////////////////////////////////////////////////////
*/
#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c\n",CValue + 32);
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c\n",CValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Charecter : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}