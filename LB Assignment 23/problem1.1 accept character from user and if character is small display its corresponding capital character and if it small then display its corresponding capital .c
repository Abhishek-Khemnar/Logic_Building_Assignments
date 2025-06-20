#include<stdio.h>
void display(char ch)
{
    char res ='\0';
  if(ch>='A' && ch<='Z')
  {
    res = ch+32;
    printf("%c",res);
  }

  else if(ch>='a' && ch<='z')
  {
    res = ch-32;
    printf("%c",res);
  }

  else
  {
    printf("%c",ch);
  }
}
int main()
{
    char cValue = '\0';
    printf("Enter a character :");
    scanf("%c",&cValue);
    display(cValue);
    return 0;
}
