//Accept one number from user and pritn number of * on screen

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue;
    iValue = 5;

    Accept(iValue);

    return 0;
}