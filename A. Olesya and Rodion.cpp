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
int n,t,i;cin>>n>>t;
if(n==1&&t==10)cout<<-1<<endl;
else if(t==10){
        for(i=0;i<n-1;i++){
        cout<<1;
    }
    cout<<0<<endl;
    }
else{
for(i=0;i<n;i++)
{
    cout<<t;
}
cout<<endl;
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