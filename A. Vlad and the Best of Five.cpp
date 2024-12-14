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
        int i,a=0,b=0;
        for(i=0;i<5;i++)
        {
            if(s[i]=='A')
                a++;
            else
                b++;
        }
        if(a>b)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
}
