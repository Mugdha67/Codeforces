#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        for(i=1;i<n;i++)
        {
            if(s[i]=='G'&&s[i-1]=='B')
            {
                swap(s[i],s[i-1]);
                i++;
            }
        }
    }
    cout<<s<<endl;
}
