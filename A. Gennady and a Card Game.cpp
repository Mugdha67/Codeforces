#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2,s3,s4,s5;
    char c,ch;
    cin>>s>>s1>>s2>>s3>>s4>>s5;
    c=s[0];
    ch=s[1];
    if(c==s1[0]||c==s2[0]||c==s3[0]||c==s4[0]||c==s5[0])
    {
        cout<<"YES"<<endl;
    }
    else if(ch==s1[0]||ch==s2[0]||ch==s3[0]||ch==s4[0]||ch==s5[0])
    {
        cout<<"YES"<<endl;
    }
    else if(c==s1[1]||c==s1[1]||c==s3[1]||c==s4[1]||c==s5[1])
    {
        cout<<"YES"<<endl;
    }
    else if(ch==s1[1]||ch==s1[1]||ch==s3[1]||ch==s4[1]||ch==s5[1])
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
