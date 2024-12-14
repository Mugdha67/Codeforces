#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p[101],i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=n;i++)
        {
            if(p[i]==j)
            {
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
}
