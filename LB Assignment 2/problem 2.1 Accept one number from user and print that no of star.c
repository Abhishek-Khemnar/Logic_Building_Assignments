#include<stdio.h>
void display(int No)
{

    int iCnt= 0;
    while(iCnt<No)
    {
       printf("*"); 
       iCnt++;
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
