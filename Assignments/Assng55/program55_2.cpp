//Write a recursive program which accepts number from user and retrun largest digit

// Input : 87983

// Output :     9

#include<iostream>
using namespace std;

int Max(int iNo)
{
    static int iMax = 0;
    if(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iMax < iDigit)
        {
            iMax = iDigit;
        } 
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"The Maximum digit from the "<< iValue << " is : \n";

    iRet = Max(iValue);

    cout<<iRet;

    return 0;
}
   