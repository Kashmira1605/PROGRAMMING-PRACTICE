// Pattern printing non linear
/*
    input:
        row: 4
        column: 4

    output:
        1   1   1   1   1
        *   *   *   *   *   
        3   3   3   3   3
        *   *   *   *   * 
*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int iCnt = 0;
    int jCnt = 0;


    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1 ; jCnt <= iCol; jCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t", iCnt);
            }         
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows: \n");
    scanf("%d", &iValue1);

     printf("Enter number of columns: \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}