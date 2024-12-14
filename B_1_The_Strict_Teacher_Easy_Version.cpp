#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define endl "\n"
#define pi acos(-1)
#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
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
int n,m,q;cin>>n>>m>>q;
int t1,t2;cin>>t1>>t2;
int d;cin>>d;
int naima;
if(t1>t2) swap(t1,t2);
    if(d<t1) 
    {
        naima=t1-1;
    } 
    else if(d>t2)
    {
        naima=n-t2;
    }
    else 
    {
        naima=(t2-t1)/2;
    }
    cout<<naima<<endl;
}
int32_t main()
//int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--)
    Kuldip_Saha_Mugdha();
}
