#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,c=0,m=0;
    cin>>n>>r;
    while(1)
    {
        m=m+n;
        c++;
        if((m-r)%10==0)
        {
            break;
        }
        else if(m%10==0)
        {
            break;
        }
    }
    cout<<c<<endl;
}
