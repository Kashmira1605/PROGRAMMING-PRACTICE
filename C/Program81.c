//sum of n elements

#include<stdio.h>       //IO
#include<stdlib.h>      //Memory management


float Average(int Arr[], int iLength)
{
    //step 5 : perform operation on array
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum/(float)iLength);
}

int main()      //entry point function
{
    int iSize = 0;      //to show size of array
    int * ptr = NULL;   //to store address of array
    int iCnt = 0;       //loop counter
    float fRet = 0.0f;

    //Step 1: Accept number of elements fro user
    printf("Enter number of elements: \n");
    scanf("%d", &iSize);

    //step 2: allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    //step 3: accept balues from users
    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);        //ptr is considered as an array
    }// array gives only base address after calling but to iterate it we need to use &

    printf("Elements of array are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    //step 4: pass the array to the function
    fRet = Average(ptr,iSize);        //Demo(400,4)
    printf("Average is: %f", fRet);

    //step 6: deallocare the memory of array
    free(ptr);
    return 0;       //return success to OS
}
