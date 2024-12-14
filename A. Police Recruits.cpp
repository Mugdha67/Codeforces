#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,c=0,m=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==-1)
        {
            if(m>0)
            {
                m--;
            }
            else
                c++;
        }
        else
            m=m+a;;
    }
    cout<<c<<endl;
}
