#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
#define endl "\n"

void Kuldip()
{
ll n,q,sa=0;cin>>n;
vector<ll>a(n),A(n);
for(ll i=0;i<n;i++)
{
    cin>>a[i];
    sa+=a[i];
}
cin>>q;
for(ll i=0;i<n;i++)
{
    A[i]=sa-a[i];
}
for(ll i=0;i<q;i++)
{
    ll t=0,c=0,naima=0,B,b;cin>>b;
    while(t<b)
    {
            naima++;
        t+=A[c];
        if(c==n-1)
        {
            c=0;
        }
        else{
            c++;
        }
    }
    cout<<naima<<endl;
}


}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t; while(t--)
    Kuldip();
}