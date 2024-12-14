#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int a,b,c;
        cin>>s;
        a=s[0]-'0';
        b=s[2]-'0';
        c=a+b;
        cout<<c<<"\n";
    }
    return 0;
}
