#include<bits/stdc++.h>
#include<string>
using namespace std;

// #define for0(i,n) for(i=0;i<n;i++)
// #define for(i,n) for(i=1;i<=n;i++)
// #define forn(i,n) for(i=n;i>=1;i--)
// #define forn0(i,n) for(i=n-1;i>=0;i--)
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
    int n,a=0,b=0,c=0,d=0,q=0,C=0,i;cin>>n;
    string s;cin>>s;
    for(i=0;i<4*n;i++)
    {
        if(s[i]=='A')a++;
        if(s[i]=='B')b++;
        if(s[i]=='C')c++;
        if(s[i]=='D')d++;
        if(s[i]=='?')C++;
    }
   if(C==4*n)
    {
        cout<<0<<endl;
    }
    else
    {
        int score=min(a,n)+min(b,n)+min(c,n)+min(d,n);
        cout<<score<<endl;
    }
    
    
    
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