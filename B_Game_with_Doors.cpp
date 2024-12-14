#include<bits/stdc++.h>
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
int l,r,L,R;cin>>l>>r>>L>>R;
int SHOURAV=max(l,L);
int HALDU=min(r,R);
if(SHOURAV>HALDU)cout<<1<<endl;
else
{
    int naima=HALDU-SHOURAV;
    if(min(l,L)<SHOURAV)naima++;
    if(max(r,R)>HALDU)naima++;
    cout<<naima<<endl;
 
}
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
