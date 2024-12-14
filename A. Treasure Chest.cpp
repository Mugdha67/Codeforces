#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k,sum=0,a;
        cin>>x>>y>>k;
        if(x==y)
        {
            cout<<x<<endl;
            break;
        }
        else if(x<y)
        {
            sum=x;
            a=y-x;
            if(a==k)
            {
                sum=sum+k;
            }
            else if(a>k)
                {
                    sum=sum+k;
                    a=y-sum;
                    sum=sum+2*a;
                }
                else
                {
                    sum=sum+a;
                }
        }
        else
        {
            sum=y;
            a=x-y;
            sum=sum+a;
        }
        cout<<sum<<endl;
    }
}
