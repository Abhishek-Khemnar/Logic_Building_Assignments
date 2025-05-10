#include<stdio.h>
int Accept(int iNo)
{
    for(int i =0 ; i<=iNo;i++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue=5;
    Accept(iValue);
    return 0;
}
