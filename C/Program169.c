//Count number of times character(user input) occurs in the string
#include<stdio.h>

int CountChar(char str[] , char cValue)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s" , Arr);  

    printf("Enter the character: \n");
    scanf(" %c", &ch);      //Add space

    iRet = CountChar(Arr , ch);
    
    printf("Number of ocurrences are: %d\n", iRet);

    return 0;
}