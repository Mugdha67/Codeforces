#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='@')
            {
                c++;
            }
            else if(s[i]=='*'&&s[i+1]=='*')
            {
                break;
            }
        }
        cout<<c<<endl;
    }
}
