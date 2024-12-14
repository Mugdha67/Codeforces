#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,c=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            c++;
        }
    }
    if(c==s.size())
    {
        for(i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        cout<<s[i];
    }
    }
    else if((c==(s.size()-1))&&(s[0]>='a'&&s[0]<='z'))
            {
                s[0]=toupper(s[0]);
                cout<<s[0];
                for(i=1;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        cout<<s[i];
    }
            }
                else
                {
                    cout<<s;
                }
    cout<<endl;
}
