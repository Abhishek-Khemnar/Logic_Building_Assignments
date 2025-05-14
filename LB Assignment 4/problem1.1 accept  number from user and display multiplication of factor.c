#include<stdio.h>
int MultFact(int ino)
{
    int Mult=1;
   for(int iCnt = 1 ; iCnt<=ino/2;iCnt++)
   {
     if(ino%iCnt==0)
     {
        Mult=Mult*iCnt;
     }
   }
   return Mult;
}
int main()
{
    int ivalue=0;
    int iRet =0; 
    printf("enter number");
    scanf("%d",&ivalue);
    iRet=MultFact(ivalue);
    printf("%d",iRet);
    return 0;
}
//Time Complexity O(N/2)
