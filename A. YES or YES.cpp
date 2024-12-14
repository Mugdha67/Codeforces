#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2="YES",s3;
        cin>>s1;
        for(char i:s1)
    {
        s3+=toupper(i);
    }
    int a=s3.compare(s2);
    if(a==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
