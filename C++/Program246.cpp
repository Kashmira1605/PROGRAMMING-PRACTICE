// accept number and toggle the 7th bit

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0X00000040;   
    return (iNo ^ iMask);  
}

int main()
{
    UINT iValue1 = 0;
    UINT iRet = 0;

    cout<<"Enter number: "<<endl;
    cin>>iValue1;

    iRet = ToggleBit(iValue1);
    cout<<"Result is: "<<iRet<<endl;
    

    return 0;
}

