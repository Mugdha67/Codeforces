#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,l=s.size()/2;
        set<char>a;
        for(i=0;i<l;i++)
        {
            a.insert(s[i]);
        }
        if(a.size()>=2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
