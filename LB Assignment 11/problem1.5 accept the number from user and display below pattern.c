#include<stdio.h>
void Pattern(int No)
{
    
    for (int iCnt = 1 ; iCnt<=No*2; iCnt++)
    {
      if(iCnt%2==0)
      {
      printf("%d\t",iCnt);
      }
    }
   
}
int main()
{
    int iValue = 0;
    printf("enter number of elements");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}
