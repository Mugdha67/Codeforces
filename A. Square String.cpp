#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,l=s.size(),c=0;
        if(l%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else{
              l=l/2;
        for(i=0;i<l;i++)
        {
            if(s[i]==s[l+i])
            {
                c++;
            }
            else
            {
                cout<<"NO"<<endl;
        break;
            }
        }
        if(c==l)
            cout<<"YES"<<endl;
        }
    }
}
