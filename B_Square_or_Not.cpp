#include<bits/stdc++.h>
#include<cmath>
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
bool Square(int n) 
{
    int root = sqrt(n);
    return root * root == n;
}
bool matrix(int n,string s)
{
    int i,j,naima=sqrt(n);
    for(i=0;i<naima;i++) 
    {
        if(s[i]!='1'||s[n-naima+i]!='1')
         {
            return false;
        }
    }
    for(i=0;i<naima;i++)
     {
        if(s[i*naima]!='1'||s[i*naima+naima-1]!='1') {
            return false;
        }
    }
    if(naima>2) 
    {
        for(i=1;i<naima-1;i++)
         {
            for(j=1;j<naima-1;j++)
             {
                if(s[i*naima+j]!='0')
                 {
                    return false;
                }
            }
        }
    }
    return true;
}
void Kuldip_Saha_Mugdha()
{
    int n;cin>>n;
    string s;cin>>s;
    if (!Square(n)) 
        {
            No;
        }
        else
        {
            if(matrix(n,s)) Yes;else No;
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