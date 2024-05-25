// Accept division of students from user aand depends on the division display exam timing.There are 4 divisions in school as A,B,C,D.
// Exam of division A is at 7AM , B at 8.30AM, C at 9.20AM, D at 10.30Am.
// (Application is case insensitive)

// Input: C
// Output:   Your exm is at 9.20AM

// Input : d
// Output: Your exam is at 10.30AM

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam is at 7 AM\n");
        return;
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam is at 8.30 AM");
        return;
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam is at 9.20 AM\n");
        return;
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam is at 10.30 AM\n");
        return;
    }
    else{
        printf("Wrong input\n");
    }
}

int main()
{
    char cValue = 0;

    printf("Enter your Division: \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);
    return 0;
}