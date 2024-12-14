#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n;
        x=(n+1)*n;
        x=x+n+2;
        cout<<x<<endl;
    }
}
