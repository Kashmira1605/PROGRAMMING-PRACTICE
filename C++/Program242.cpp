// Check if the 2 bits entered by user is ON or OFF

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo , UINT iPos1 , UINT iPos2)
{
    UINT iMask1 = 0X00000001;
    UINT iMask2 = 0X00000001;
    UINT iMask = 0X00000000;
    UINT iResult = 0;

    if((iPos1 < 1) || (iPos1 >32) || (iPos2 < 1) || (iPos2 > 32))
    {
        cout<<"Invalid Position"<<endl;
        return false;
    }

    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 - 1);
    iMask = iMask1 | iMask2;

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
    UINT iBit1 = 0;
    UINT iBit2 = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue1;

    cout<<"Enter the 1st bit position (Range should be 1 to 32): "<<endl;
    cin>>iBit1;

    cout<<"Enter the 2nd bit position (Range should be 1 to 32): "<<endl;
    cin>>iBit2;

    bRet = CheckBit(iValue1 , iBit1 , iBit2);

    if(bRet == true)
    {
        cout<<iBit1 <<" and "<< iBit2 <<" bits are ON"<< endl;
    }
    else{
        cout<<iBit1 <<" and "<< iBit2 <<"bits are OFF"<< endl;
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