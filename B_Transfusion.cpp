#include<bits/stdc++.h>
#include<vector>
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
     ll n,i,sum=0,b=1;cin>>n;
     vector<ll>a(n);
     for(i=0;i<n;i++)
     {
        cin>>a[i];
        sum+=a[i];
     }
     if(sum%n!=0)
     {
        NO;
     }else{
            ll t=sum/n;
     for(i=0;i<n-2;i++)
     {
        if(a[i]>t)
        {
            a[i+2]+=(a[i]-t);
            a[i]=t;
        }
        else
        {
            a[i+2]-=(t-a[i]);
            a[i]=t;
        }
     }
     if((a[n-2]==t)&&(a[n-1]==t))
     {
        YES;
     }
     else NO;
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