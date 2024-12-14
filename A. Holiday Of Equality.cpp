#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,i,m=0,a[10001],sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        a[i]=m-a[i];
        sum=sum+a[i];
    }
    cout<<sum<<endl;
}
