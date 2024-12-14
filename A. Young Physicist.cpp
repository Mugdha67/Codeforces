#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x[201],y[201],z[201],X=0,Y=0,Z=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        X=X+x[i];
        Y=Y+y[i];
        Z=Z+z[i];
    }
    if((X==0&&Y==0)&&Z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
