#include<stdio.h>
int main()
{
    int t,count=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,sum=0;
        scanf("%d%d%d",&a,&b,&c);
        sum=sum+a+b+c;
        if(sum>1)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
