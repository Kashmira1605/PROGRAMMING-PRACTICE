//smallest and largest of all n numbers(one func only)

#include<stdio.h>
#include<stdlib.h>

int MinimumMaximum(int Arr[], int iLength)
{
    int iMin = Arr[0];      //can handel positive as well as negative values
    int iCnt = 0;
    int iMax = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    printf("Maximum element is: %d\n",iMax);
    printf("Minimum element is: %d\n",iMin);
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    
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

    MinimumMaximum(ptr, iSize);
   
    free(ptr);

    return 0;
}