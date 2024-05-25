//Accept number of rows and columns from user and display below pattern

//Input:    row = 3     col = 4
//Output:       A   B   C   D   
//              A   B   C   D    
//              A   B   C   D    
//              A   B   C   D 

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iCol)
{
    int i , j = 0;
    char ch = '\0';
    
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1, ch = 'A' ; j<= iCol ; j++, ch++)
        {
            
                printf("%c\t",ch);
           
            
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
