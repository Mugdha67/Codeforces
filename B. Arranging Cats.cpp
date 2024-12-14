#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,i,C=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        for(i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {

                if(s1[i]=='1')
                {
                    c++;
                }
                else
                    C++;

            }
        }
        if(c>=C)
        cout<<c<<endl;
        else
            cout<<C<<endl;
    }
}
