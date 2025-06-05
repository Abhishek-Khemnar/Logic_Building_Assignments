#include<stdio.h>
void Pattern(int iCol,int iRow)
{
    int number =1;

    for(int i = 1; i<=iRow ; i++)
    {
        for(int  j = 1 ; j<=iCol;j++)
        {
            printf("%d\t",number);
            number++;

        }
         printf("\n");
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
