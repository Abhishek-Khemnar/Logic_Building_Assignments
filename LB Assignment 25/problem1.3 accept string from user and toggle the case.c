#include<stdio.h>
void strtoggles(char *str)
{
   while(*str!='\0')
   {
     if(*str>='a'&& *str<='z')
     {
       *str=*str-32;
     }

    else if(*str>='A'&& *str<='Z')
     {
       *str=*str+32;
     }

     str++;
   }
}
int main()
{
    char arr[20];
    printf("Enter string :");
    scanf("%[^'\n']s",arr);
    strtoggles(arr);
    printf("Modified string is : %s",arr);
    return 0;
}
