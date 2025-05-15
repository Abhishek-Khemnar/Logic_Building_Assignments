#include<stdio.h>
double SquareMeter(int iValue)
{
     double Meter = iValue*0.0929;
     return Meter;
}
int main()
{
    int iValue = 0;
    double iRet = 0;
    printf("Enter area in square feet");
    scanf("%d",&iValue);
    
    
    iRet=SquareMeter(iValue);
    printf(" squareMeter : %lf",iRet);
    return  0;

}
