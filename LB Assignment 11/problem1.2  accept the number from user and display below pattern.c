#include<stdio.h>
void Pattern(int No)
{
    
    for (int iCnt = No ; iCnt>0 ; iCnt--)
    {
      printf("%d\t #\t",iCnt);
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
