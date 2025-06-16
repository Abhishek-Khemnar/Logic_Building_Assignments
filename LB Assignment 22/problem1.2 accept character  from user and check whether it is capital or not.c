#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkCapital(char ch)
{
    BOOL bflag = FALSE;
    if((ch<'A'||ch>'Z') &&(ch<'a'||ch>'z'))
    {
       return -1;
    }

    if(ch>='A'&&ch<='Z')
    {
        bflag=TRUE;
    }

    else if(ch>='a'&&ch<='z')
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
    bRet=ChkCapital(cValue);
    if(bRet==TRUE)
    {
        printf("IT IS  CAPITAL CHARACTER");
    }
    else if(bRet==FALSE)
    {
        printf("IT IS NOT CAPITAL CHARACTER");
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}
