//Accept string from user and count number of small characters

//Input: "MarvellouS"
//Output: 6 (8-2)

#include<stdio.h>

int Difference(char *str)
{
    int iCntSmall = 0;
    int iCntCapital = 0;

    while(*str != 0)
    {
        if((*str >= 'a') && (*str <= 'z' ))
        {
            iCntSmall++;
        }

        if((*str >= 'A') && (*str <= 'Z' ))
        {
            iCntCapital++;
        }

        str++;
    }

    return (iCntSmall - iCntCapital);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String: \n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);
    printf("%d",iRet);

    return 0;
}

