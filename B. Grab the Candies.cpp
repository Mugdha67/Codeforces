#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,a[101],O=0,E=0;
        cin>>n;
        for(i=0;i<n;i++)
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
        if(O<E)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
