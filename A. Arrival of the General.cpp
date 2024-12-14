#include<bits/stdc++.h>
using namespace std;

#define loop(i,n) for (int i = 0; i < int(n); i++)
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
    int n,i,B,S,Bi,Si;
    cin>>n;
    int a[n];
    B=1;
    S=100;
    loop(i,n)
    {
        cin>>a[i];
        if(a[i]>B)
        {
            B=a[i];
            Bi=i;
            }
        if(a[i]<=S)
        {
            S=a[i];
            Si=i;
            }
    }
if(Bi<Si){
     int x=Bi+n-1-Si;
     cout<<x<<endl;
}
else
{
    int x=Bi+n-2-Si;
     cout<<x<<endl;
}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int t; cin>>t; while(t--)
    solve();
}
