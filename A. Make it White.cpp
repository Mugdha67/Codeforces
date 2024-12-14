#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0,C=0,m;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                c++;
            }
        }
        m=c;
        c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                c++;
            }
            if(c>0)
            {
                C++;
                if(c==m)
                {
                    cout<<C<<endl;
                    break;
                }
            }
        }
    }
}
