//Accept number of rows and columns from user and display below pattern

//Input:    row = 4     col = 3
//Output:       1   1   1   1   
//              2   2   2   2   
//              3   3   3   3   
//              4   4   4   4

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iCol)
{
    int i , j = 0;
    
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1 ; j<= iCol ; j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 , iValue2 = 0;
    
    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &iValue1 , &iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}
