#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,i,sum=0,m;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        m=k*i;
        sum=sum+m;
    }
    sum=sum-n;
    if(sum<1)
        cout<<"0"<<endl;
    else
        cout<<sum<<endl;
}
