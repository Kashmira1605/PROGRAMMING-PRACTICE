//Calculate the power of a number taking both the base and power as an input from the user

#include<stdio.h>
#include<stdbool.h>

long int CalculatePower(int iBase , int iPower)
{
    int iCnt = 0;
    long int iResult = 1;    //int iResult = iBase;

    for(iCnt = 1 ; iCnt <= iPower ; iCnt++)     //for(iCnt = 1 ; iCnt < iPower ; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    long int iRet = 0;

    printf("Enter base : \n");
    scanf("%d", &iValue1);

    printf("Enter power : \n");
    scanf("%d", &iValue2);

    iRet = CalculatePower(iValue1, iValue2);

    printf("Result is : %d\n", iRet);

    return 0;
}