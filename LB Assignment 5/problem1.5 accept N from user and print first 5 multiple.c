#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int iCnt =0;
    int Mult=0;
    for( iCnt = 1 ; iCnt<=5 ; iCnt++)
    {
        Mult=iCnt*iNo;
        printf("%d\n",Mult);
        
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);

    return 0;
}
//Time Complxity O(5)
