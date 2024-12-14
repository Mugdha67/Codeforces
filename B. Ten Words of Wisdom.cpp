#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,i,x=0,m;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a>>b;
            if(a<=10)
            {
                if(b>x)
                {
                    x=b;
                    m=i;
                }
            }
        }
        cout<<m<<endl;
    }
}
