//Accept character from user and check whether it is a digit or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkDigit(char ch)
{
    
    if((ch >= '0' && ch <= '9'))
    {
        return TRUE;
    }
    else{
        return FALSE;
    }

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: \n");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Digit\n");
    }
    else{
        printf("It is not a Digitr\n");
    }

    return 0;
}