#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,r,sum=0,Sum=0;
        cin>>n;
        a=n/1000;
        b=n%1000;
        while(a>0)
    {
        r=a%10;
        a=a/10;
        Sum=Sum+r;
    }
    while(b>0)
    {
        r=b%10;
        b=b/10;
        sum=sum+r;
    }
    if(Sum==sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
