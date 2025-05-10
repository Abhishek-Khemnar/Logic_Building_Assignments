#include<stdio.h>
void printEven(int iNo)
{
  if(iNo<=0)
  {
    return ;

  }

  for(int i = 1;iNo*2>=i;i++ )
  {
    if(i%2==0)
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
    printEven(iVlaue);
    return 0;
}
