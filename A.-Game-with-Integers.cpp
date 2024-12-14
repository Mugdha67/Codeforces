#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n;
        a=n+1;
        b=n-1;
        if((a%3==0)||(b%3==0))
        {
            cout<<"First"<<endl;
        }
        else
            cout<<"Second"<<endl;
    }
}
