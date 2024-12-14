#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,k,a,x=0;
    cin>>w>>h>>k;
    while(k--)
    {
        a=((w+h)*2)-4;
        w-=4;
        h-=4;
        x+=a;
    }
    cout<<x<<endl;
}
