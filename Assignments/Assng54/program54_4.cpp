//Write a recursive program which accepts number from user and retrun factorial

// Input : 5

// Output :     120

#include<iostream>
using namespace std;

int Fact(int iNo)
{
    static int iFact = 1;
    if(iNo != 0)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"The Factorial of "<< iValue << " is : \n";

    iRet = Fact(iValue);

    cout<<iRet;

    return 0;
}
   