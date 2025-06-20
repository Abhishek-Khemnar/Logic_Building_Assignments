#include<stdio.h>
void display(char ch)
{

  if(ch>='A' && ch<='Z')
  {
    for(char c = ch ; c<='Z';c++)
    {
        printf("%c\t",c);
    }
  }

  else if(ch>='a' && ch<='z')
  {
    for(char c = ch ; c>='a';c--)
    {
        printf("%c\t",c);
    }
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
