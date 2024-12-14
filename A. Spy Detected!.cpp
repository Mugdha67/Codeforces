#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,a[101];
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            if(a[i]!=a[i+1])
            {
                if((a[i-1]==a[i])||(a[i]==a[i+2]))
                {
                    cout<<(i+1)<<endl;
                    break;
                }
                else
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}
