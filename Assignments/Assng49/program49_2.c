//Write a program which accepts number from user and display below pattern

// Input :    7846

// Output :     *   *   *   *   *   *
//              *   *   *   *
//              *   *   *   *   *   *   *   *
//              *   *   *   *   *   *   * 

#include<stdio.h>

void Pattern(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
            int iDigit = iNo % 10;

            for(int i = 0; i <= iDigit ; i++)
            {
                printf("*\t");
            }
            printf("\n");

            iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    printf("The pattern is:\n ");
    Pattern(iValue);

    return 0;
}