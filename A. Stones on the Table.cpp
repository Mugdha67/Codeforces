#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
            c++;
    }
    cout<<c<<endl;
}
