#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkCapital(char ch)
{
    BOOL bflag = FALSE;

    if(ch>='0'&&ch<='9')
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
    bRet=ChkCapital(cValue);
    if(bRet==TRUE)
    {
        printf("IT IS  DIGIT");
    }
    else 
    {
        printf("IT IS NOT DIGIT");
    }
    return 0;
}
