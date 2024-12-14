#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,sum=0,m=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        sum=sum+b-a;
        if(sum>m)
            m=sum;
    }
    cout<<m<<endl;
}
