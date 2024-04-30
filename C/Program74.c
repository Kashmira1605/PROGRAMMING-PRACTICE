#include<stdio.h>       //IO
#include<stdlib.h>      //Memory management

int main()      //entry point function
{
    int iSize = 0;      //to show size of array
    int * ptr = NULL;   //to store address of array
    int iCnt = 0;       //loop counter

    //Step 1: Accept number of elements fro user
    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    //step 2: allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //step 3: accept balues from users
    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of array are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    return 0;       //return success to OS
}
