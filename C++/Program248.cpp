// accept number and  position from user and toggle that bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo , UINT iPos)
{
    UINT iMask1 = 0X00000001;
    UINT iResult = 0;

     if((iPos < 1) || (iPos >32))
    {
        cout<<"Invalid Position"<<endl;
        return false;
    }

    iMask1 = iMask1 << (iPos - 1);

    iResult = iNo ^ iMask1;
    return iResult;
    
}

int main()
{
    UINT iValue1 = 0;
    UINT iRet = 0;
    UINT iBit = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue1;

    cout<<"Enter the bit position (Position in between 1 and 32): "<<endl;
    cin>>iBit;

    iRet = OffBit(iValue1 , iBit);
    cout<<"Result is: "<<iRet<<endl;
    

    return 0;
}

