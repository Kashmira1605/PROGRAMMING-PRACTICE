//Display "Jay Ganesh" 5 times on screen

#include<stdio.h>

//Example of "Iteration"

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)     //Filter
    {
        printf("Please enter the positive number\n");
        return;
    }

    //      1           2       3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");      //4
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number how many times you want to print Jay Ganesh: \n");
    scanf("%d", &iValue);
    Display(iValue);
    
    return 0;
}