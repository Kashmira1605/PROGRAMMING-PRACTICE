//Display the factors of the number given as input except for that number itself
//program 21 to program 23

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)     //O(N)
    {
        if(iNo % iCnt == 0)
        {
            printf("Factor of number %d is %d \n", iNo,iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}