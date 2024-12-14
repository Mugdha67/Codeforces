#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,l=s.size(),c=0;
    for(i=0;i<l;i++)
    {
        if(s[i]=='4'||s[i]=='7')
        {
            c++;
        }
    }
    if(c==4||c==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
