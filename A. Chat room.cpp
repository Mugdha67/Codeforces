#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,l=s.size(),c=5;
    for(i=0;i<l;i++)
    {
        if(s[i]=='h'&&c==5)
        {
            c--;
        }
        else if(s[i]=='e'&&c==4)
            {
                c--;
            }
                else if(s[i]=='l'&&(c==3||c==2))
                {
                    c--;
                }
                    else if(s[i]=='o'&&c==1)
                    {
                        c--;
                    }
    }
    if(c==0)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
}

