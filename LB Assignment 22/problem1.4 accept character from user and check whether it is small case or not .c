#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkSmall(char ch)
{
    BOOL bflag = FALSE;
    if((ch<'A'||ch>'Z') &&(ch<'a'||ch>'z'))
    {
       return -1;
    }

    if(ch>='a'&&ch<='z')
    {
        bflag=TRUE;
    }

    else if(ch>='A'&&ch<='Z')
    {
        bflag=FALSE;
    }
    return bflag;
}
int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;
    printf("Enter the character\n");
    scanf("%c",&cValue);
    bRet=ChkSmall(cValue);
    if(bRet==TRUE)
    {
        printf("IT IS  A SMALL CASE CHARACTER");
    }
    else if(bRet==FALSE)
    {
        printf("IT IS NOT A SMALL CASE CHARACTER");
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
