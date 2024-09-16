//Write a recursive program which accepts number from user and retrun factorial

// Input : 5

// Output :     120

#include<iostream>
using namespace std;

int Mult(int iNo)
{
    static int iMul = 1;
    if(iNo != 0)
    {
        int iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"The multiplication of "<< iValue << " is : \n";

    iRet = Mult(iValue);

    cout<<iRet;

    return 0;
}
   