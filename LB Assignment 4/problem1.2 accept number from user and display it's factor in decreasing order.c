#include<stdio.h>
void FactRev(int ino)
{

   for(int iCnt = ino/2 ; iCnt>=1;iCnt--)
   {
     if(ino%iCnt==0)
     {
        printf("%d\n",iCnt);
     }
   }
}
int main()
{
    int ivalue=0;
    printf("enter number");
    scanf("%d",&ivalue);
    FactRev(ivalue);
    return 0;
}
//Time Complexity O(N/2)
