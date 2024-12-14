#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    if(a>b)
    {
        c=(a-b)/2;
        cout<<b<<" "<<c<<endl;
    }
    else
    {
        c=(b-a)/2;
        cout<<a<<" "<<c<<endl;
    }
}
