#include<bits/stdc++.h>
using namespace std;

#define for0(i,n) for(i=0;i<n;i++)
#define for(i,n) for(i=1;i<=n;i++)
#define forn(i,n) for(i=n;i>=1;i--)
#define forn0(i,n) for(i=n-1;i>=0;i--)
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
    string t;
        getline(cin,t);
        int hour = stoi(t.substr(0, 2));
    int minute = stoi(t.substr(3, 2));

    string period = (hour < 12) ? "AM" : "PM";

    if (hour == 0) {
        hour = 12;
    } else if (hour > 12) {
        hour -= 12;
    }

    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period << endl;
}
//int32_t main()
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t;cin.ignore(); while(t--)
    Kuldip_Saha_Mugdha();
}
