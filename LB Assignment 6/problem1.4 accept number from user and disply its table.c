#include<stdio.h>
void  Table(int iNo)
{
    int iNum = 1;
   if(iNo<0)
   {
    iNo=-iNo;
   }
   
   for (int iCnt =1;iCnt<=10;iCnt++ )
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
    Table(iValue);

    return 0;
}
