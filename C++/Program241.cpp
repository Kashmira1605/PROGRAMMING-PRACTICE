// Check if the bit entered by user is ON or OFF

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0X00000001; 
    UINT iResult = 0;

    if((iPos < 1) || (iPos >32))
    {
        cout<<"Invalid Position"<<endl;
        return false;
    }

    iMask = iMask << (iPos -1);

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    UINT iValue1 = 0;
    bool bRet = false;
    UINT iBit = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue1;

    cout<<"Enter the bit position (Range should be 1 to 32): "<<endl;
    cin>>iBit;

    bRet = CheckBit(iValue1 , iBit);

    if(bRet == true)
    {
        cout<<"bit is ON"<<endl;
    }
    else{
        cout<<"bit is OFF"<<endl;
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