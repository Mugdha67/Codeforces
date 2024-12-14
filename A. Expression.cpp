#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,m,n,o,p,q;
    cin>>a>>b>>c;
    m=a+b*c;
    n=a*(b+c);
    o=a*b*c;
    p=(a+b)*c;
    q=a+b+c;
    if((m>=n)&&(m>=o)&&(m>=p)&&(m>=q))
    {
        cout<<m<<endl;
    }
    else if((n>=m)&&(n>=o)&&(n>=p)&&(n>=q))
    {
        cout<<n<<endl;
    }
    else if((o>=m)&&(o>=n)&&(o>=p)&&(o>=q))
    {
        cout<<o<<endl;
    }
    else if((p>=m)&&(p>=n)&&(p>=o)&&(p>=q)){
        cout<<p<<endl;}
    else if((q>=m)&&(q>=n)&&(q>=o)&&(q>=p)){
        cout<<q<<endl;}

}
