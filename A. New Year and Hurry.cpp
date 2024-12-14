#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,sum=0,c=0;
    cin>>n>>k;
    k=240-k;
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*5);
        c++;
        if(sum>k)
        {
            c--;
            cout<<c<<endl;
            break;
        }
    }
    if(c==n)
        cout<<c<<endl;
}
