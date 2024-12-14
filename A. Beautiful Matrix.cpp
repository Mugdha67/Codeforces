#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i,j,n,x,y,c=0;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>n;
            if(n==1)
            {
                x=i;
                y=j;
            }
        }

    }
    x=abs(x-3);
    y=abs(y-3);
    x=x+y;
    cout<<x<<endl;
}
