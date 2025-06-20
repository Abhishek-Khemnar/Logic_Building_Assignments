#include<stdio.h>
void strwrx(char *str)
{
   while(*str!='\0')
   {
     if(*str>='a'&& *str<='z')
     {
       *str=*str-32;
     }
     str++;
   }
}
int main()
{
    char arr[20];
    printf("Enter string :");
    scanf("%[^'\n']s",arr);
    strwrx(arr);
    printf("Modified string is : %s",arr);
    return 0;
}
