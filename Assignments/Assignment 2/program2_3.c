/*
////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays "Hello" if the number is less than 10,
//                 otherwise displays "Demo"
// Input         : Integer
// Output        : (prints a message to the screen)
// Author        : Rohit Gokul Pandgale
// Date          : 21/10/2026
//
////////////////////////////////////////////////////
*/
#include <stdio.h>
void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}
int main()
{
    int iValue=0;
    printf("Enter a number:\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}
