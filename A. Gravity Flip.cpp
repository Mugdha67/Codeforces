#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
        if(i<n-1)
            cout<<" ";
    }
    cout<<endl;
}
