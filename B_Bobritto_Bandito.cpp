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
     int n,m,l,r,x,y,L;cin>>n>>m>>l>>r;
L=abs(l);
     if(m/2>=r)
     {
        y=r;
        x=y-m;
     }
        else if(m/2>=L)
        {
            x=l;
            y=x+m;
        }
        else
        {
            if(m%2==0)
            {
                m=m/2;
                x=0-m;
                y=m;
            }
            else
            {
                m=m/2;
                x=0-m;
                y=m+1;
            }
        }
        cout<<x<<" "<<y<<endl;
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--)
    Kuldip_Saha_Mugdha();
}