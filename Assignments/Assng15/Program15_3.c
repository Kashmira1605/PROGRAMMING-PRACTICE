//Accept number of rows and columns from user and display below pattern

//Input:    row = 3     col = 5
//Output:       5   4   3   2   1   
//              5   4   3   2   1    
//              5   4   3   2   1   
//              

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iCol)
{
    int i , j = 0;
    
    for(i = iRow ; i >= 1 ; i--)
    {
        for(j = iCol ; j >= 1 ; j--)
        {
            printf("%d\t", j);
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
