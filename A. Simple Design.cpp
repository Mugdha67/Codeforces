#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,k,n,m,sum;
        cin>>x>>k;
        while(1){
                sum=0;
        n=x;
    while(n>0)
        {
        m=n%10;
        sum=sum+m;
        n=n/10;
        }
        if(sum%k==0){
            cout<<x<<endl;
            break;
        }
        else{
            x++;
        }
    }
    }
}
