//Write a recursive program which accepts string from user and count number of characters

// Input : Hello

// Output :     5

#include<iostream>
using namespace std;

int Strlen(char *str)
{
    static int i = 0;
    if(*str != '\0')
    {
        i++;
        str++;
        Strlen(str);
    }
    return i;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout<<"Enter string : \n";
    cin>>arr;

    cout<<"The number of characters in the string are : \n";

    iRet = Strlen(arr);

    cout<<iRet;

    return 0;
}
