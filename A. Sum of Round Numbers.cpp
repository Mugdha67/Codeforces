#include<bits/stdc++.h>
#include<math.h>
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
    int n,r,c=0,p=-1;cin>>n;
    vector<int>v;
    while(n>0)
    {
        p++;
        r=n%10;
        n/=10;
        if(r!=0)
        {
            c++;
            r=r*pow(10,p);
            v.push_back(r);
        }
    }
    cout<<c<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i!=v.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--)
    solve();
}