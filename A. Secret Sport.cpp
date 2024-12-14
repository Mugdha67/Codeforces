#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        if(s[n-1]=='A')
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
}
