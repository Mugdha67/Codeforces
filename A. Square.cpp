#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x[2002],y[2002],i,a;
        for(i=0;i<4;i++)
        {
            cin>>x[i]>>y[i];
        }
            if(x[0]==x[1])
            {
                a=y[0]-y[1];
                cout<<a*a<<endl;
            }
            else
            {
                a=x[0]-x[1];
                cout<<a*a<<endl;
            }

    }
}
