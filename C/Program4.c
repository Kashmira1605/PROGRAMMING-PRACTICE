/*
    Steps to create a application

    Step 1: Understand the problem statement 
    Step 2: Write the algorithm
    Step 3: Decide the programming language
    Step 4: Write a program
    Step 5: Test the written program
*/

// Write a program which performs addition of  two numbers


/*
    Algorithm

    START
        Accept 1st no as No1
        Accept 2nd no as No2
        Create one variable as Ans
        Perform addition of No1 and No2
        Store the addition in the variable Ans
        Display the value of Ans
    STOP
*/

/////////////////////////////////////////////////////
//
//  Problem Statement: Write a program which performs addition of  two numbers
//
/////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//   Function name: Addition
//   Input: Unsigned integer, Unsigned interger
//   Output: Unsigned interger
//   Description: Performs addition of 2 numbers 
//   Author: Kashmira Chetan Shah
//   Date: 18/04/2023
//
///////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

/////////////////////////////////////////////////////////
//      Entry point function
/////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter 1st no: \n");
    scanf("%d", &iNo1);

    printf("Enter 2nd no: \n");
    scanf("%d", &iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Addition is: %d\n", iAns);

    return 0;
}