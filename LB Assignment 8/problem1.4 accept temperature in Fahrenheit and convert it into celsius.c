#include<stdio.h>
double FhtoCs(float fTemp)
{
     double celsius = (fTemp-32)*(5.0f/9.0f);
     return celsius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&fValue);
  
    dRet=FhtoCs(fValue);
    printf("temperature in celsius : %lf",dRet);
    return  0;

}
