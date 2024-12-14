#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b,c,x;
        int C=0;
        cin>>a>>b>>c;

        while(a!=b)
        {
             x=abs(a-b)/2;
            if(x<c)
            {
               c=x;
            }
            if(c>a&&c>b)
        {
            C=-1;
        }
            if(a>b)
            {
                a=a-c;
                b=b+c;
                C++;
            }
            else if(b>a)
            {
                a=a+c;
                b=b-c;
                C++;
            }

        }
        cout<<C<<"\n";
    }
    return 0;
}
