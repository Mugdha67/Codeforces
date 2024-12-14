#include<bits/stdc++.h>
using namespace std;

#define loop(i, n) for (int i = 0; i < int(n); i++)
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
    int n,m,k,i,j,x=0;
    cin>>n>>m>>k;
    int b[n],c[m];
loop(i,n)
{
    cin>>b[i];
}
loop(j,m)
{
    cin>>c[j];
}
loop(i,n)
{
    loop(j,m)
    {
        if((b[i]+c[j])<=k)
        x++;
    }
}
cout<<x<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}