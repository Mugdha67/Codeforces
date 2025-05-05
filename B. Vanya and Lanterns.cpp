#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define endl "\n"
#define all(a) (a).begin(), (a).end()
#define fin(a) for (auto &x : a) cin>>x
void Kuldip_Saha_Mugdha()
{
     ll n,l,i;cin>>n>>l;
     vector<ll>a(n);
     fin(a);
     sort(all(a));
     if(a[0]==0 && a[n-1]==l)
     {
        ll m=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>m)
            {
                m=a[i+1]-a[i];
            }
        }
        ld d=(m*1.0)/2;
        cout<<fixed<<setprecision(10)<<d<<endl;
     }
     else if(a[0]!=0 && a[n-1]==l)
     {
        ll m=a[0]*2;
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>m)
            {
                m=a[i+1]-a[i];
            }
        }
        ld d=(m*1.0)/2;
        cout<<fixed<<setprecision(10)<<d<<endl;
     }
     else if(a[0]==0 && a[n-1]!=l)
     {
        ll m=2*(l-a[n-1]);
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>m)
            {
                m=a[i+1]-a[i];
            }
        }
        ld d=(m*1.0)/2;
        cout<<fixed<<setprecision(10)<<d<<endl;
     }
     else
     {
        ll m=2*(l-a[n-1]);
        ll M=a[0]*2;
        m=max(m,M);
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>m)
            {
                m=a[i+1]-a[i];
            }
        }
        ld d=(m*1.0)/2;
        cout<<fixed<<setprecision(10)<<d<<endl;
     }
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Kuldip_Saha_Mugdha();
}