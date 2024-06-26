//smallest & largest of all n numbers

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];      //can handel positive as well as negative values
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int Minimum(int Arr[], int iLength)
{
    int iMin = Arr[0];      //can handel positive as well as negative values
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    
    printf("Enter the elements : \n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Elements of the array are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    iRet = Maximum(ptr,iSize);
    printf("Largest number is: %d\n", iRet);

    iRet = Minimum(ptr, iSize);
    printf("Smallest number is: %d \n", iRet);

    free(ptr);

    return 0;
}