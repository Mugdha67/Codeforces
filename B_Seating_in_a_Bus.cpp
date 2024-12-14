// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;

// // #define for0(i,n) for(i=0;i<n;i++)
// // #define for(i,n) for(i=1;i<=n;i++)
// // #define forn(i,n) for(i=n;i>=1;i--)
// // #define forn0(i,n) for(i=n-1;i>=0;i--)
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
// int n,i,j,c=0;;cin>>n;
// vector<int>a(n);
// for(i=0;i<n;i++)
// {
//     cin>>a[i];
// }
// for(i=1;i<n;i++)
// {
//     for(j=0;j<i;j++)
//     {
//         if((a[i]+1==a[j])||(a[i]-1==a[j]))
//         {
//             c++;
//             break;
//         }
       
//     }
// }
// if(c==n-1)YES;
// else NO;
// }
// //int32_t main()
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t; cin>>t; while(t--)
//     Kuldip_Saha_Mugdha();
// } //time limit


// #include<bits/stdc++.h>
// #include<vector>
// #include<unordered_set>
// using namespace std;
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
//     int n; 
//     cin >> n;
//     vector<int> a(n);
//     unordered_set<int> seen;
//     bool is_possible = true;

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         if (seen.count(a[i] - 1) == 0 && seen.count(a[i] + 1) == 0 && i != 0) {
//             is_possible = false;
//         }
//         seen.insert(a[i]);
//     }

//     if (is_possible) YES;
//     else NO;
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t; cin >> t; 
//     while (t--)
//         Kuldip_Saha_Mugdha();
// }//accepted


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
    int n,i;cin>>n;
    vector<int>a(n);
    fin(a);
    int l=a[0],r=a[0];
    bool naima=false;
    for(i=1;i<n;i++)
    {
        if(a[i]==l-1)l--;
        else if(a[i]==r+1)r++;
        else naima=true;
    }
    if(naima)NO;
    else YES;
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