//Count number of small letters in the string
#include<stdio.h>

int strlenSmallX(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = strlenSmallX(Arr);
    
    printf("Number of small letters: %d\n", iRet);

    return 0;
}