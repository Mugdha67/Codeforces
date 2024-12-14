#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,S;
    cin>>s;
    int i,l;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
		{
		    continue;
		}
		else
        {
            cout<<".";
            S=towlower(s[i]);
            cout<<S;
        }
    }
    cout<<endl;
}
