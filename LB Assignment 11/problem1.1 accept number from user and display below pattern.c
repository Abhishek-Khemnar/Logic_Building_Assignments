#include<stdio.h>
void Pattern (int No)
{
    char ch = 'A';
  for ( int iCnt = 0; iCnt<No;iCnt++ ,ch++)
  {
    printf("%c\t",ch);
  }
}
int main()
{
    int iValue = 0;
    printf("Enter number of elements");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}
