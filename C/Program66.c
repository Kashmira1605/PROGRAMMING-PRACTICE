// accept number and return the reverse number

#include<stdio.h>

float DigitAverage(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    float iAvg = 0.0f;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCnt++;
        iNo = iNo / 10;
    }
    iAvg = ((float)iSum/(float)iCnt);
    return iAvg;        // (iSum/iCnt)
}

int main()
{
    int iValue = 0;
    float iRet = 0.0f;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = DigitAverage(iValue);

    printf("Average is %f \n", iRet);
    return 0;
}