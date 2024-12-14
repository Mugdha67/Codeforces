#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0;
    cin>>n>>k;
    do
    {
        n=n-k;
        c++;
    }while(n>0);
    cout<<c<<endl;
}
