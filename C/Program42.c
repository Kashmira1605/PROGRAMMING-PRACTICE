// Display the factorial of a number accepted from user

#include<stdio.h>


typedef unsigned long int ULONG;
ULONG CalculateFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    ULONG ifact = 1;
    for(iCnt=iNo; iCnt >= 1; iCnt--)
    {
        ifact = ifact*iCnt;
    }
    return ifact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = CalculateFactorial(iValue);

    printf("Factorial of %d is: %d", iValue ,iRet);

    return 0;
}