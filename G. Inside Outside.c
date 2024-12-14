#include<stdio.h>
int main()
{
    long long int X1,Y1,X2,Y2,X3,Y3,P,Q;
    double A,a,b,c;
    scanf("%lld %lld %lld %lld %lld %lld %lld %lld",&X1,&Y1,&X2,&Y2,&X3,&Y3,&P,&Q);
    A=abs(X1*Y2-X1*Y3+X2*Y3-X2*Y1+X3*Y1-X3*Y2);
    A=0.5*A;
    a=(X1*Y2-X1*Q+X2*Q-X2*Y1+P*Y1-P*Y2);
    a=0.5*a;
    b=(X1*Q-X1*Y3+P*Y3-P*Y1+X3*Y1-X3*Q);
    b=0.5*b;
    c=(P*Y2-P*Y3+X2*Y3-X2*Q+X3*Q-X3*Y2);
    c=0.5*c;
    if(a>=0&&b>=0&&c>=0)
        {
        if(a==0||b==0||c==0)
            printf("On the edge\n");
        else
            printf("Inside\n");
    }
    else
        printf("Outside\n");
    return 0;
}

