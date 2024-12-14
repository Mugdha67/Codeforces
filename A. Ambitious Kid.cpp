#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,a,i,x=100000,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        m=abs(a);
        if(m<x)
        {
            x=m;
        }
    }
    cout<<x<<endl;
}
