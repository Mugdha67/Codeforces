#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0,i;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            c++;
        }
        else
        {
            c=0;
        }
        if(c==6)
        {
            c=1;
            break;
        }
    }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
