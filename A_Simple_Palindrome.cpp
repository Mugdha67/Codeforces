#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define endl "\n"
#define pi acos(-1)
#define gcd(a,b)   __gcd(a,b)
#define lcm(a,b)   (a*b) / gcd(a,b)
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
void Kuldip_Saha_Mugdha(int n)
{
    string s="";
    for(int i=1;i<=n;i++)
    {
        if(i%5==1)s+="a";
        else if(i%5==2)s+="e";
        else if(i%5==3)s+="i";
        else if(i%5==4)s+="o";
        else s+="u";
    }
    sort(all(s));
    cout<<s<<endl;
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--)
    {
        int n; cin>>n;
        Kuldip_Saha_Mugdha(n);  
    }
}