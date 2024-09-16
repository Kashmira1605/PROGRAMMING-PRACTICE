//write a recursive program which accept string from user and return the number of white spaces

// Input  :     He  ll o
// Output :     3

#include<iostream>
using namespace std;

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    cout<<"Enter string: \n";
    cin.getline(arr , 20);

    iRet = WhiteSpace(arr);

    cout<<"The number of White spaces is : "<<iRet;

    return 0;
}