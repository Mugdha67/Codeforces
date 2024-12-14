#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x=0;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        if(n[1]=='+')
        {
            x=x+1;
        }
        else if(n[1]=='-')
        {
            x=x-1;
        }
    }
    cout<<x<<endl;
}
