#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,a;
    cin>>n>>k;
    if(k<=(n+1)/2)
    {
        a=(k*2)-1;
        cout<<a<<endl;
    }
    else
    {
        a=(k-((n+1)/2))*2;
        cout<<a<<endl;
    }
}
