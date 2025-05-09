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
     int n,m,c;cin>>n>>m;
     for(int j=n+1;j<=50;j++){
        c=0;
     for(int i=2;i<=j/2;i++)
     {
        if(j%i==0)
        {
            c=1;
            break;
        }
     }
     if(c==0)
     {
        n=j;
        break;
     }
    }
     if(n==m) YES;
     else NO;
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // int t; cin>>t; while(t--)
    Kuldip_Saha_Mugdha();
}