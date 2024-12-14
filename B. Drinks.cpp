#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,sum=0;
    double d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    d=(double)sum/n;
    printf("%.12lf\n",d);
}
