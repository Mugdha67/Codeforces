#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0,p=0,i,a;
        string s;
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='+')
            {
                p++;
            }
            else if(s[i]=='-')
            {
                m++;
            }
        }
        if(m>=p)
        {
            m=m-p;
            cout<<m<<endl;
        }
        else
        {
            p=p-m;
            cout<<p<<endl;
        }

    }
}
