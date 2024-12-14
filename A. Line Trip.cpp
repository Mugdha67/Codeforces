#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,x,a[101],i,m=0,b;
    cin>>n>>x;
    a[0]=0;
    a[n+1]=x;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n+1;i++)
    {
        if(i==(n+1))
        {
            b=2*(abs(a[i]-a[i-1]));
        }
        else{
        b=abs(a[i]-a[i-1]);
        }
        if(b>m)
        {
            m=b;
        }
    }
    cout<<m<<endl;
    }
}
