#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,a;
        cin>>x>>y>>n;
            a=n-(n%x)+y;
            if(a<=n)
            {
                cout<<a<<endl;
            }
            else
            {
                a=n-(n%x)+y-x;
                cout<<a<<endl;
            }
    }
}

