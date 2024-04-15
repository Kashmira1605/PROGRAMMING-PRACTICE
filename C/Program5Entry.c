#include "Program5Header.h"


/////////////////////////////////////////////////////////
//      Entry point function
/////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter 1st no: \n");
    scanf("%d", &iNo1);

    printf("Enter 2nd no: \n");
    scanf("%d", &iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Addition is: %d\n", iAns);

    return 0;
}