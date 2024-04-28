#include<stdio.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;
BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("It contains Zero\n");
    }
    else{
        printf("It does not contain Zero\n");
    }

    return 0;
}