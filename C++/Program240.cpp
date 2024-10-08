//accept number and check if the 7th and 14th and 21st bit are on or not

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00102040; 
    UINT iResult = 0;

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
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number: "<<endl;
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"7th , 14th and 21st bit are ON"<<endl;
    }
    else{
        cout<<"7th , 14th and 21st bit are OFF"<<endl;
    }

    return 0;
}

/*
    No:     13
                                     
    Binary :    0   0   0   0   1   |1|   0   1
    Mask   :    0   0   0   0   0   |1|   0   0
    &
----------------------------------------------------
                0   0   0   0   0    1    0   0

*/