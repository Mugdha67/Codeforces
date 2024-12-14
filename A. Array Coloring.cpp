#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,O=0,E=0,a[51];
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                E=E+a[i];
            }
            else
            {
                O=O+a[i];
            }
        }
        if(E%2==0&&O%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
