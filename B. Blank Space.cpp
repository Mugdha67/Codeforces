#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[101],m=0,c=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                c=0;
            }
            else
            {
                c++;
                if(m<c)
                {
                    m=c;
                }
            }
        }
        cout<<m<<endl;
    }
}
