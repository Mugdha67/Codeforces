#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
    cin>>n;
    x=n/2020;
    y=n%2020;
    if(y<=x)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
