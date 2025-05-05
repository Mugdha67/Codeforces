#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) x.begin(),x.end()
#define mod 1000000007
void KULDIP()
{
int n,i,m=2000,b;cin>>n;
vector<int>a(n);
for(i=0;i<n;i++)
{
    cin>>a[i];
}
for(i=0;i<n-1;i++)
{
    b=abs(a[i]-a[i+1]);
    if(b<m)
    {
        m=b;
    }
}
cout<<m<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t; cin>>t;while(t--)
    KULDIP();
}