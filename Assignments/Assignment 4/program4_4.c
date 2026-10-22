/*
////////////////////////////////////////////////////
//
// Function Name : CheckVotingEligibility
// Description   : Checks whether a person is eligible to vote
//                 and identifies invalid negative ages
// Input         : Integer (Age)
// Output        : (prints voting eligibility status)
// Author        : Rohit Gokul Pandgale
// Date          : 22/10/2026
//
////////////////////////////////////////////////////
*/
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Age");
        return;
    }
    else if(iNo >= 18)
    {
        printf("Eligible for Voting");
    }
    else //if(iNo < 18 && iNo >= 0)
    {
        printf("Not Eligible for Voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter Your Age : \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}