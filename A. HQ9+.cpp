#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    cin>>p;
    int i,l=p.size(),c=0;
    for(i=0;i<l;i++)
    {
        if(p[i]>='!'&&p[i]<='~')
        {
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
            c=1;
            }
    }
    if(c)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
