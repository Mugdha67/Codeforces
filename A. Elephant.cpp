#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,m=0;
    cin>>x;
    while(x>=5)
    {
        x=x-5;
        m++;
    }
    while(x>=4)
    {
        x=x-4;
        m++;
    }
    while(x>=3)
    {
        x=x-3;
        m++;
    }
    while(x>=2)
    {
        x=x-2;
        m++;
    }
    while(x>=1)
    {
        x=x-1;
        m++;
    }
    cout<<m<<endl;
}
