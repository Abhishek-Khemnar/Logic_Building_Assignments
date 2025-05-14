#include<stdio.h>
int  FactorialDiff(int iNo)
{
    int iEventFact = 1;
    int iOddFact = 1;
    int result =0;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   
   for (int iCnt =1;iCnt<=iNo;iCnt++ )
   {
    if(iCnt%2==0)
    {
       iEventFact=iEventFact * iCnt;
    }
    else
    {
        iOddFact=iOddFact*iCnt;
    }
       
   }
   result = iEventFact-iOddFact;
   return result;
}
int main()
{
     int iValue = 0,iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet= FactorialDiff(iValue);
    printf("Odd Factorial of number is : %d",iRet);

    return 0;
}
