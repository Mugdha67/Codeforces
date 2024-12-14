#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int x11,x12,x13,x21,x22,x23,x31,x32,x33;
    cin>>x11>>x12>>x13>>x21>>x22>>x23>>x31>>x32>>x33;

    cout<<((x11+x12+x21)%2==0?"1":"0");
    cout<<((x11+x12+x13+x22)%2==0?"1":"0");
    cout<<((x13+x12+x23)%2==0?"1":"0")<<endl;

    cout<<((x21+x11+x22+x31)%2==0?"1":"0");
    cout<<((x12+x22+x21+x23+x32)%2==0?"1":"0");
    cout<<((x13+x22+x23+x33)%2==0?"1":"0")<<endl;

    cout<<((x31+x32+x21)%2==0?"1":"0");
    cout<<((x31+x32+x22+x33)%2==0?"1":"0");
    cout<<((x32+x33+x23)%2==0?"1":"0")<<endl;
}
