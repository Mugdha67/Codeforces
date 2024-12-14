#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,sum=0,a,s;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            sum=sum+a;
        }
        s=sqrt(sum);
        if((s*s)==sum)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
