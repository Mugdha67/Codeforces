#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,S="314159265358979323846264338327";
        cin>>s;
        int i,c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==S[i])
            {
                c++;
            }
            else
                break;
        }
        cout<<c<<endl;
    }
}
