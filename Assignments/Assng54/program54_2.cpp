//Write a recursive program which accepts number from user and retrun summation of digits

// Input : 879

// Output :     24

#include<iostream>
using namespace std;

int Sum(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        int iDigit =  iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Sum(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"The Summation of digits is : \n";

    iRet = Sum(iValue);

    cout<<iRet;

    return 0;
}
   