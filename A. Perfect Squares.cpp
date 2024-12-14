#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,i,b;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=n-1;i>=0;i--)
    {
         b=sqrt(a[i]);
        b=b*b;
        if(a[i]!=b)
        {
            b=a[i];
            break;
        }
    }
    cout<<b<<endl;
}
