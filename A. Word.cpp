#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st,U,L;
    cin>>st;
    int i,u=0,l=0;
    for(i=0;i<st.size();i++)
    {
        if(st[i]>='a'&&st[i]<='z')
        {
            l++;
        }
        else
        {
            u++;
        }
    }
    if(l>=u)
    {
        for(i=0;i<st.size();i++)
        {
            L=tolower(st[i]);
            cout<<L;
        }
    }
    else
    {
        for(i=0;i<st.size();i++)
        {
            U=toupper(st[i]);
            cout<<U;
        }
    }
    cout<<endl;
}
