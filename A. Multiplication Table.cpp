#include<bits/stdc++.h>
using namespace std;

#define loop(i, n) for (int i = 1; i <= int(n); i++)
#define ll long long int
#define endl "\n"
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define fin(a) for (auto &x : a) cin>>x
#define fout(a) for (auto &x : a) cout<<x<<" "; cout<<endl;
void solve()
{
    ll n,x,i,c=0;
    cin>>n>>x;
    loop(i, n)
    {
        if(x%i==0&&x/i<=n)c++;
    }
    cout<<c<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t; cin>>t; while(t--)
    solve();
}