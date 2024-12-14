#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int l=st.size(),i;
    for(i=0;i<l;i++)
    {
        if(st[i]=='-')
        {
            if(st[i+1]=='.')
            {
                cout<<"1";
            }
            else if(st[i+1]=='-')
            {
                cout<<"2";
            }
            i++;
        }
        else if(st[i]=='.')
        {
            cout<<"0";
        }
    }
    cout<<endl;
}
