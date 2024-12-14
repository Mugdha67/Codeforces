#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,s;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"Bob"<<endl;
        }
        else{
        s=a+b;
        if(s%2==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }
        }
    }
}
