#include<bits/stdc++.h>
#include<vector>
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
int n,i,x;
cin>>n;
vector<int>p(7);
loop(i,7)
{
    cin>>p[i];
}
x=0;
while(n>0)
{
    loop(i,7)
    {
        n-=p[i];
        if(n<=0)
        {
            x=i+1;
            break;
        }
    }
}
cout<<x<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //int t; cin>>t; while(t--)
    solve();
}
