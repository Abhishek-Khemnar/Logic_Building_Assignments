#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkAlpha(char ch)
{
    BOOL bflag = FALSE;

    if(ch>='A'&&ch<='z')
    {
        bflag=TRUE;
    }
   
    return bflag;
}
int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c",&cValue);
    bRet=ChkAlpha(cValue);
    if(bRet==TRUE)
    {
        printf("IT IS CHARACTER");
    }
    else
    {
        printf("IT IS NOT CHARACTER");
    }
    
    return 0;
}
