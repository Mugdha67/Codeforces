#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x;
        int a=-1;
        cin>>n;
        map<int,int>m;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            m[x]++;
            if(m[x]>=3)
            {
                a=x;
            }
        }
        cout<<a<<endl;
    }
}
