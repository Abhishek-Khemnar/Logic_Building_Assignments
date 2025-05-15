#include<stdio.h>
double CircleArea(float fRadius)
{
     double Area = 3.14 * fRadius * fRadius;
     return Area;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    printf("Enter radius");
    scanf("%f",&fValue);
    dRet=CircleArea(fValue);
    printf("Area of circle : %lf",dRet);
    return  0;

}
