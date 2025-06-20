#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Chkspecial(char ch)
{
  BOOL bFlaged = TRUE;

  if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||(ch>='0'&&ch<='9'))
  {
     bFlaged = FALSE; 
  }

   return bFlaged;
}
int main()
{
    char cValue = '\0';
    BOOL bRet =FALSE;
    printf("Enter a character :");
    scanf("%c",&cValue);
    bRet=Chkspecial(cValue);
    if(bRet==TRUE)
    {
        printf("it is a special character");
    }
    else
    {
       printf("it is not a special character");
    }
    return 0;
}
