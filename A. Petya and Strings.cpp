/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,n;
    for(i=0;i<s1.size();i++)
    {
        if(isupper(s1[i]))
        {
            s1[i]=s1[i]+32;
        }
        if(isupper(s2[i]))
        {
            s2[i]=s2[i]+32;
        }
    }
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]>s2[i])
        {
            cout<<"1\n";
            return 0;
        }
        if(s1[i]>s2[i])
        {
            cout<<"-1\n";
            return 0;
        }
    }
        cout<<"0\n";
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    cin>>s1>>s2;
    for(char i:s1)
    {
        s3+=tolower(i);
    }
    for(char i:s2)
    {
        s4+=tolower(i);
    }
    int a=s3.compare(s4);
    cout<<a<<endl;

}

