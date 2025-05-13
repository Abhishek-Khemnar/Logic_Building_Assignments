#include<stdio.h>
int SumNonFact(int iNo)
{
    int Sum=0;
   for(int iCnt = 1 ; iCnt<=iNo;iCnt++)
   {
     if(iNo%iCnt!=0)
     {
        Sum=Sum+iCnt;
     }
   }
   return Sum;
}
int main()
{
    int ivalue=0;
    int iRet =0; 
    printf("enter number");
    scanf("%d",&ivalue);
    iRet=SumNonFact(ivalue);
    printf("%d",iRet);
    return 0;
}
