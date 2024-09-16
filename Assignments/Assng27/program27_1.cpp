// Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00000000; 
    UINT iResult = 0;
    iNo |= (7 << 0);

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return ;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"Bit is ON"<<endl;
    }
    else
    {
        cout<<"Bit is OFF"<<endl;
    }

    return 0;
}


/*

0000    0000    0000    0000    0000    0000    0000    0000

iPos = 7

iMask = 0X00000001

iMask = 0000    0000    0000    0000    0000    0000    0000    0001

iMask = iMask << (iPos - 1);
iMask = iMask << (7 - 1);
iMask = iMask << 6;

iMask = 0000    0000    0000    0000    0000    0000    0   0   0   0   0   0   0   1   (Initial) 

iMask = 0000    0000    0000    0000    0000    0000    0   1   0   0   0   0   0   0   (After shifting) 

*/