#include<stdio.h>
#define TRUE 1
#define FALSE 2
typedef int BOOL;
BOOL ChkEven(int iNo)
{
   if((iNo%2)==0)
   {
    return TRUE;
   }
   else{
    return FALSE;
   }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter Number");
    scanf("%d",&iValue);
    bRet = ChkEven(iValue);

    if(bRet==TRUE)
    {
    printf(" even number");
    }
    else{
        printf("odd number");
    }

    return 0;
}
