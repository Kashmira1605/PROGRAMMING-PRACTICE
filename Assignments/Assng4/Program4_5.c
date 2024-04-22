// calculate the percentage

#include<stdio.h>

float Percentage(float iNo1, float iNo2)
{
    if(iNo1 == 0)
    {
        printf("Error \n");
        printf("Note:Total marks cannot be zero\n");
        return 0.0;
    }
    else{
        float iRet = 0.0f;
        iRet = (iNo2/iNo1) * 100;
        return iRet;
    }
}
    

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float iRet = 0.0f;
    printf("Enter total marks:\n");
    scanf("%d", &iValue1);

    printf("Enter obtained marks: \n");
    scanf("%d", &iValue2);

    iRet = Percentage(iValue1,iValue2);

    printf("Persentage is: %f", iRet);

    return 0;
}