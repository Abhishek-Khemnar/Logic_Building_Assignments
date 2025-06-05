#include<stdio.h>

void Pattern(int iCol,int iRow)
{
    char ch ='\0';
    
    for(int i = 1 ; i<=iRow ; i++)
    {
        if(i%2==0) 
        {
        for(int j = 1,ch ='a'; j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
        }
         printf("\n");
    }
      else 
      {
        for(int j = 1,ch ='A'; j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
    }

}
int main()
{
    int iValue1 =0,iValue2 = 0;
    printf("enter the number of columns");
    scanf("%d",&iValue1);
    printf("enter the number of rows");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0; 
}
