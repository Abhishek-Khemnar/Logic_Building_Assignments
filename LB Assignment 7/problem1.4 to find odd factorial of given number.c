#include<stdio.h>
int  OddFactorial(int iNo)
{
    int iFact = 1;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   
   for (int iCnt =1;iCnt<=iNo;iCnt++ )
   {
    if(iCnt%2!=0)
    {
       iFact=iFact * iCnt;
    }
       
   }

   return iFact;
}
int main()
{
     int iValue = 0,iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    iRet= OddFactorial(iValue);
    printf("Odd Factorial of number is : %d",iRet);

    return 0;
}
//Time Complexity O(N)
