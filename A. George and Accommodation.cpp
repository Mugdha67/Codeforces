#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,b,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if((b-a)>1)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
