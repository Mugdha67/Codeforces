#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,a;
        cin>>n>>k;
        if(n<=k)
        {
            a=ceil((k*1.0)/n);
            cout<<a<<endl;
        }
        else
        {
            k=(ceil((n*1.0)/k))*k;
            a=ceil((k*1.0)/n);
            cout<<a<<endl;
        }
    }
}
