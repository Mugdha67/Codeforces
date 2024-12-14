#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        int c=0;
        cin>>st;
        if(st[0]=='a')
        {
            c++;
        }
        if(st[1]=='b')
        {
            c++;
        }
        if(st[2]=='c'){
            c++;
        }
            if(c>0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
}
