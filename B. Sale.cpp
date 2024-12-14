#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,m,i,a[1001],sum=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<m;i++)
    {
        if(a[i]>=0)
            {
            break;
        }
        sum=sum+abs(a[i]);
    }
    cout<<sum<<endl;
}

