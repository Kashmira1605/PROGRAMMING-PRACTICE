//Count number of white spaces in the string
#include<stdio.h>

int CountSpace(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;

}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = CountSpace(Arr);
    
    printf("Digits are: %d\n", iRet);

    return 0;
}