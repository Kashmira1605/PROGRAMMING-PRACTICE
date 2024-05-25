//accept name from user and print its lenght

#include<stdio.h>

 int strlenX(char str[])
{
    

}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String: \n");
    scanf("%[^'\n']s" , Arr);

    iRet = strlenX(Arr);
    
    printf("Length of string is: %d\n", iRet);

    return 0;
}