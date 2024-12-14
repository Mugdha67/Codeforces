#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,a,b,n,c=0;
        cin>>n;
        while(n--)
        {
            cin>>a>>b;
            if(a>b)
                c++;
        }
        cout<<c<<endl;;
    }
}

