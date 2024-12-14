#include<stdio.h>
int main()
{
    int T,t,h,i;
    scanf("%d %d %d %d",&T,&t,&h,&i);
    t=t+1;
    T=T-t;
    h=h+1;
    T=T-h;
    i=i+1;
    T=T-i;
    if(T>=0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
