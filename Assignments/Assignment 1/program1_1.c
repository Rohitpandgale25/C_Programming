
#include <stdio.h>
/*
////////////////////////////////////////////////////
//
// Function Name : Divide
// Description   : Performs division of two integers
// Input         : Integer, Integer
// Output        : Integer (returns -1 if divisor is zero)
// Author        : Rohit Gokul Pandgale
// Date          : 21/10/2026
//
////////////////////////////////////////////////////
*/
int Divide(int iNo1,int iNo2)
{
    int iAns=0;
    if(iNo2==0)
    {
        return -1;
    }
    iAns=iNo1/iNo2;
    return iAns;
}
int main()
{
    int iValue1=15,iValue2=5;
    int iRet=0;
    iRet=Divide(iValue1,iValue2);
    printf("Division is %d",iRet);
    return 0;
}
