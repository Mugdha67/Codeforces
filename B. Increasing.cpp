#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        long long int a[10000];
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n+1);
        a[0]=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<a[i+1])
                c++;
        }
        if(c==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
