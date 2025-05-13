#include<stdio.h>
void NonFact(int ino)
{

    int iCnt = 0;

   for(int iCnt =1 ; iCnt<=ino;iCnt++)
   {
     if(ino%iCnt!=0)
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
    NonFact(ivalue);
    return 0;
}
