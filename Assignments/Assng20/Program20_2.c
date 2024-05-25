//Accept character from user and check whether it is a capital alphabet or not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkCapital(char ch)
{
    
    if((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital character\n");
    }
    else{
        printf("It is not a Capital character\n");
    }

    return 0;
}