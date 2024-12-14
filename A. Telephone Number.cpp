#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        string s;
        cin>>n>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='8'&& n-i>=11)
            {
                c++;
                break;
            }
        }
        if(c>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
