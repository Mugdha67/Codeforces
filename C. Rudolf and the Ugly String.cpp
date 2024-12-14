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
    int n,i,c=0;cin>>n;
    string s;cin>>s;
    loop(i,n)
    {
        if((s[i]=='m'&&s[i+1]=='a')&&s[i+2]=='p')
        {
            c++;
            i+=2;
        }
        else if((s[i]=='p'&&s[i+1]=='i')&&s[i+2]=='e')
        {
            c++;
            i+=2;
        }
    }
    cout<<c<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}