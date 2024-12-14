#include<bits/stdc++.h>
#include <string> 
#include <vector> 
#include <algorithm> 
#include <cmath> 
#include <queue> 
#include <map>
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
     int n,i,W=1,H=1,w,h; cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>w>>h;
        if(w>W) W=w;
        if(h>H) H=h;
    }
    cout<<(W*2)+(H*2)<<endl;

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