#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,i;
    cin>>a>>b;
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    for(i=1;i<=7;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            cout<<i<<endl;
            break;
        }
    }
}
