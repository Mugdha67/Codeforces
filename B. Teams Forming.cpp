#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[101],c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i=i+2)
    {
        c=c+a[i+1]-a[i];
    }
    cout<<c<<endl;
}
