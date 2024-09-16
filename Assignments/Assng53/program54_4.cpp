//write a recursive program which displays below pattern

// Output :     A   B   C   D   E

#include<iostream>
using namespace std;

void Display(int iNo)
{ 
    static int i = 1;
    static char ch = 'A';

    if(i <= iNo)
    {
        cout<<ch<<"\t";
        i++;
        ch++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    cout<<"Enter the number:\n";
    cin>>iValue;

    cout<<"The pattern is: \n";

    Display(iValue);

    return 0;
}