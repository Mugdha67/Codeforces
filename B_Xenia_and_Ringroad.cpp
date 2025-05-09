#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
#define ll long long int
#define ld long double
#define pb push_back
#define endl "\n"
#define pi acos(-1)
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define no  cout<<"no\n"
#define NO  cout<<"NO\n"
#define No  cout<<"No\n"
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fin(a) for (auto &x : a) cin>>x
#define fout(a) for (auto &x : a) cout<<x<<" "; cout<<endl;
void Kuldip_Saha_Mugdha()
{
     ll n,m;cin>>n>>m;
     vector<ll>a(m);
     fin(a);
     ll naima=1,ane=0;
     for(ll i=0;i<m;i++)
     {
        if(naima<a[i])
        {
            ane+=(a[i]-naima);
            naima=a[i];
        }
        else if(naima>a[i])
        {
            ane+=(n-naima+1);
            naima=1;
            ane+=(a[i]-naima);
            naima=a[i];
        }
        else
        {
            continue;
        }
     }
     cout<<ane<<endl;
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int t; cin>>t; while(t--)
    Kuldip_Saha_Mugdha();
}