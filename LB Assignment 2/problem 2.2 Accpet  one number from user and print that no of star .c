#include<stdio.h>
void display(int No)
{

    int iCnt= No;
    while(iCnt>0)
    {
       printf("*"); 
       iCnt--;
    }
}
int main()
{
    int iValue = 0;
    printf("enter number");
    scanf("%d",&iValue);
     
    display(iValue);
    return 0;
}
