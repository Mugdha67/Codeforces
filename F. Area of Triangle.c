#include<stdio.h>
int main()
{
    long long int X1,Y1,X2,Y2,X3,Y3;
    double area;
    scanf("%lld %lld %lld %lld %lld %lld",&X1,&Y1,&X2,&Y2,&X3,&Y3);

    area=(X1*Y2-X1*Y3+X2*Y3-X2*Y1+X3*Y1-X3*Y2);
    area=0.5*area;
    if(area < 0)
        area=-area;
    printf("%.4f\n",area);
    return 0;
}

