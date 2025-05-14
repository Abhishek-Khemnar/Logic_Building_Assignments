#include<stdio.h>
void  TableRev(int iNo)
{
    int iNum = 1;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   
   for (int iCnt =10;iCnt>=1;iCnt-- )
   {
       
       iNum=iNo * iCnt;
       printf("%d\n",iNum);
   }

}
int main()
{
     int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    TableRev(iValue);

    return 0;
}
