// smallest digit from the number

#include<stdio.h>

int LargestDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMax;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = LargestDigit(iValue);

    printf("Largest no is %d \n", iRet);
    return 0;
}