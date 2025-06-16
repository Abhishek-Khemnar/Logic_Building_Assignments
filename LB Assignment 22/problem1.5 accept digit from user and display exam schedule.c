#include<stdio.h>
void DisplaySchedule(char chDiv)
{

    if(chDiv=='A'||chDiv=='a')
    {
        printf("Your exam at 7AM");
    }

    else if(chDiv=='B'||chDiv=='b')
    {
        printf("Your exam at 8:30AM");
    }

    else if(chDiv=='C'||chDiv=='c')
    {
        printf("Your exam at 9:20AM");
    }

    else if(chDiv=='D'||chDiv=='d')
    {
        printf("Your exam at 10:30AM");
    }

    else
    {
        printf("invalid input");
    }

}
int main()
{
    char cValue ='\0';
    printf("Enter your Division :");
    scanf("%c",&cValue);
    DisplaySchedule(cValue);
    return 0;
}
