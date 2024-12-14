#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s;
    cin>>s1>>s2>>s3;
    s=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s.begin(),s.end());
    if(s3==s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
