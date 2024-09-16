//Write a recursive program which accepts number from user and return its reverse number

// Input : 523

// Output :     325

#include<iostream>
using namespace std;

int Reverse(int iNo)
{
    static int iReverse = 0;
    if(iNo != 0)
    {
        int iDigit = iNo % 10;
        iReverse = iDigit + (iReverse * 10);
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iReverse;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"The mReverse of the "<< iValue << " is : \n";

    iRet = Reverse(iValue);

    cout<<iRet;

    return 0;
}
   