#include<stdio.h>
void display(int iNo , int iFrequency)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt<=iFrequency;iCnt++)
   {
          printf("%d\n",iNo);
   }
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    printf("Enter frequence ");
    scanf("%d",&iCount);
    display(iValue,iCount);
    return 0;
}
