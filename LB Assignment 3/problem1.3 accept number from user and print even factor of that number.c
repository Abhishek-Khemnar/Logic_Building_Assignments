#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if(iNo<=0)
    {
        iNo=-iNo;

    }

    for(i = 1 ; i<iNo;i++)
    {
          if(iNo%i==0&&i%2==0)
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
    DisplayEvenFactor(iVlaue);
    return 0;
}
