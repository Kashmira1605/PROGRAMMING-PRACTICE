// #include<stdio.h>

// int SumFactors(int iNo)
// {
//     int iCnt = 0;
//     int iSum = 0;
//     for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
//     {
//         if((iNo % iCnt) == 0)
//         {
//             printf("Factor of number %d is %d \n", iNo,iCnt);
//             iSum = iSum + iCnt;
//         }
        
//     }
//     return iSum;
// }

// int main()
// {
//     int iValue = 0;
//     int iRet = 0;

//     printf("Enter a number: \n");
//     scanf("%d", &iValue);

//     iRet = printf("Addition of factors is: %d " ,SumFactors(iValue));


//     return 0;
// }

//Display the sum of the factors of the number given as input except for that number itself
//program 25

#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= (iNo / 2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{   
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);

    printf("Summation of factors is : %d\n", iRet);
    
    return 0;
}