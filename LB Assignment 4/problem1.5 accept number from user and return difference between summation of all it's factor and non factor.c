#include<stdio.h>
int FactDiff(int iNo)
{
    int SumFactor =   0;
    int SumNonFactor = 0;
    int Result =0;
   for(int iCnt = 1 ; iCnt<iNo;iCnt++)
   {
     if(iNo%iCnt==0)
     {
        SumFactor=SumFactor+iCnt;
     }
     else 
     {
        SumNonFactor=SumNonFactor+iCnt;
     }
   }

   Result = SumFactor-SumNonFactor;
   return Result;
}
int main()
{
    int ivalue=0;
    int iRet =0; 
    printf("enter number");
    scanf("%d",&ivalue);
    iRet=FactDiff(ivalue);
    printf("%d",iRet);
    return 0;
}
