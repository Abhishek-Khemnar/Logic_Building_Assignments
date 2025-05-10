#include<stdio.h>
void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo<=0)
    {
       iNo = -iNo;
    }

    for(int i = 1;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
     int iVlaue = 0;
    printf("Enetr number \n");
    scanf("%d",&iVlaue);
    DisplayFactor(iVlaue);
    return 0;
}
