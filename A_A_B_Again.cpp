// #include<bits/stdc++.h>
// using namespace std;

// #define for0(i,n) for(i=0;i<n;i++)
// #define for(i,n) for(i=1;i<=n;i++)
// #define forn(i,n) for(i=n;i>=1;i--)
// #define forn0(i,n) for(i=n-1;i>=0;i--)
// #define ll long long int
// #define ld long double
// #define pb push_back
// #define endl "\n"
// #define pi acos(-1)
// #define YES cout<<"YES\n"
// #define Yes cout<<"Yes\n"
// #define yes cout<<"yes\n"
// #define no  cout<<"no\n"
// #define NO  cout<<"NO\n"
// #define No  cout<<"No\n"
// #define all(a) (a).begin(), (a).end()
// #define rall(a) (a).rbegin(), (a).rend()
// #define fin(a) for (auto &x : a) cin>>x
// #define fout(a) for (auto &x : a) cout<<x<<" "; cout<<endl;
// void Kuldip_Saha_Mugdha()
// {
//     int n,a,b;cin>>n;
//     a=n%10;
//     b=n/10;
//     cout<<a+b<<endl;
// }
// //int32_t main()
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t; cin>>t; while(t--)
//     Kuldip_Saha_Mugdha();
// }
#include<bits/stdc++.h>
#include<vector>
#include<string>
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
    int i;
    //vector<int>a(3);
    string s;cin>>s;
    int sum=0;
    for(i=0;i<2;i++)
    {
        sum+=s[i]-'0';
    }
    cout<<sum<<endl;
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