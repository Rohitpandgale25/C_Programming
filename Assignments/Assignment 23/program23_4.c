//write a program which accept string from user and display only digits from that string
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: DisplayDigit
//  Description  : program which accept string from user and display only digits from that string
//  Input        : String
//  Output       : Integer
//  Date         : 11/11/2026
//  Author       : Rohit Gokul Pandgale
//
//////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{

    while (*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        *str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter Your String : \n");
    scanf("%[^'\n']s",&Arr);

    DisplayDigit(Arr);

    return EXIT_SUCCESS;
}