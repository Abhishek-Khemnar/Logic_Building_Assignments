#include<stdio.h>
double RectArea(float fWidth,float fHeight)
{
     double Area = fWidth*fHeight;
     return Area;
}
int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double dRet = 0.0;
    printf("Enter Width");
    scanf("%f",&fValue1);
    printf("Enter height");
    scanf("%f",&fValue2);
    dRet=RectArea(fValue1,fValue2);
    printf("Area of rectangle : %lf",dRet);
    return  0;

}
