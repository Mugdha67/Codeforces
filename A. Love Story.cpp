#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2="codeforces";
    int t,i,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>s1;
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
