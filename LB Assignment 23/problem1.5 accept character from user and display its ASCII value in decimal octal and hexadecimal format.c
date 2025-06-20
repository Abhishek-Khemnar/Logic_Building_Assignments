#include<stdio.h>
void display(char ch)
{
   printf("Decimal :%d \n",ch);
   printf("octal :%o\n",ch);
   printf("Hexa :%x\n",ch);
}
int main()
{
    char cValue = '\0';
    printf("Enter a character :");
    scanf("%c",&cValue);
    display(cValue);
    return 0;
}
