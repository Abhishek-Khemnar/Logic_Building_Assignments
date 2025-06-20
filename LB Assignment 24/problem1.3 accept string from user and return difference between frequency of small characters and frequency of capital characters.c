#include<stdio.h>
int CountSmall(char *str)
{
    int iCountSmall = 0;
    int iCountCapital = 0;
    int result = 0;

    if(str==NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
        if(*str>='a'&&*str<='z')
        {
            iCountSmall++;
        }
         
        else if (*str>='A'&&*str<='Z')
        {
           iCountCapital++;
        } 
        str++;
    }
    result= iCountSmall-iCountCapital;
    return result;
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("Enter string :");
    scanf("%[^'\n']s",arr);
    iRet = CountSmall(arr);
    printf("%d",iRet);
    return 0;
}
