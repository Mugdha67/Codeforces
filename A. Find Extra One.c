#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,p=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<0)
            m++;
        else
            p++;
    }
    if(p>m)
    {
        if(m<2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else if(p<m)
    {
        if(p<2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else
    {
        if(m<2||p<2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}


