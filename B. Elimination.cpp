#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a+b)>(c+d))
            cout<<a+b<<endl;
        else
            cout<<c+d<<endl;
    }
}
