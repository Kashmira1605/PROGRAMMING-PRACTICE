//Accept number from user and display below pattern

//Input:    8
//Output:   22  4   6   8   10  12  14  16

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2 ; iCnt <= (iNo*2) ; iCnt++)
    {
        printf("%d\t",(iCnt*2));
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: \n");
    scanf("%d" , &iValue);

    Pattern(iValue);
    return 0;
}
