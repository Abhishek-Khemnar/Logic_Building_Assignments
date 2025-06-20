#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkVowel(char *str)
{
    BOOL bflaged = FALSE;
    if(str==NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
        {
            bflaged =TRUE;
        }
        str++;
    }
    return bflaged;
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;
    printf("Enter string :");
    scanf("%[^'\n']s",arr);
    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("contains vowel");
    }
    else
    {   
        printf("there is no vowel");
    }
    return 0;
}
