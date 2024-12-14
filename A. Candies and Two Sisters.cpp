#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n<3)
        {
            cout<<"0"<<endl;
        }
        else if(n%2==0)
        {
            n=n/2;
            cout<<n-1<<endl;
        }
        else{
            n=n/2;
            cout<<n<<endl;}
    }
}
