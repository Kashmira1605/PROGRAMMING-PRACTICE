//Write a recursive program which accepts number from user and return smallest digit

// Input : 87983

// Output :     9

#include<iostream>
using namespace std;

int Min(int iNo)
{
    static int iMin = iNo % 10;
    if(iNo != 0)
    {
        int iDigit = iNo % 10;
        if(iMin > iDigit)
        {
            iMin = iDigit;
        } 
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    cout<<"The Minimum digit from "<< iValue << " is : \n";

    iRet = Min(iValue);

    cout<<iRet;

    return 0;
}
   