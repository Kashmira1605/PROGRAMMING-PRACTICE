//Accept number of rows and columns from user and display below pattern

//Input:    row = 3     col = 4
//Output:       1   2   3   4   
//              5   6   7   8      
//              9   10  11  12   
//              

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iCol)
{
    int i , j = 0;
    int temp = 1;
    
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = temp ; j<= (iCol*i) ; j++)
        {
                printf("%d\t",j);
        }
        temp = j;
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
