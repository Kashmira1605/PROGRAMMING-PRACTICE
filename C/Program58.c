#include<stdio.h>
#include<stdbool.h>

int CountDigitFrequency(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
           iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
    
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CountDigitFrequency(iValue);

    printf("Frrequency is: %d", bRet);

    return 0;
}