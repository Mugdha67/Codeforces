#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define endl "\n"
void Kuldip_Saha_Mugdha()
{
    int a,b,k;cin>>a>>b>>k;
    int haldu=(a+k-1)/k;
    int shourav=(b+k-1)/k;
    int tuly_didi=haldu+haldu-1;
    int Sap=shourav+shourav;
    if(haldu>shourav)cout<<tuly_didi<<endl;
    else cout<<Sap<<endl;
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