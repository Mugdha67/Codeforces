#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b;cin>>a>>b;
    if((a==1&&b==2)||(a==2&&b==1))cout<<3<<endl;
    else if((a==1&&b==3)||(a==3&&b==1))cout<<2<<endl;
    else if((a==2&&b==3)||(a==3&&b==2))cout<<1<<endl;
    return 0;
}