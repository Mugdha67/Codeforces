#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        long long int p=1;
        cin>>n;
        int a[10];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            p=p*a[i];
        }
        a[0]=a[0]+1;
        p=p*a[0];
        cout<<p<<endl;
    }
}
