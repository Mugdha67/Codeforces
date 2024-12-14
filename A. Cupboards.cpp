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
    int t,L=0,LL=0,R=0,RR=0; cin>>t; 
    loop(i, t)
    {
        int l,r;
        cin>>l>>r;
        if(l==1)L++;
        else LL++;
        if(r==1)R++;
        else RR++;
    }
    if(L>LL)L=LL;
    if(R>RR)R=RR;

    cout<<L+R<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();
}