/*
////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : Checks whether a character is a vowel
// Input         : Character
// Output        : BOOL (TRUE if vowel, otherwise FALSE)
// Author        : Rohit Gokul Pandgale
// Date          : 22/10/2026
//
////////////////////////////////////////////////////
*/
#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if(CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U' || CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u')
      {
        return TRUE;
      }
      else
      {
        return FALSE;
      }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Charecter : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It Is Vowel");
    }
    else
    {
        printf("It Is Not Vowel");
    }

    return EXIT_SUCCESS;
}