#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,i,c=0,a;
    cin>>n>>h;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
        {
            c+=2;
        }
        else
        {
            c++;
        }
    }
    cout<<c<<endl;
}
