#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b>a)
        {
            swap(a,b);
        }
        b=b*2;
        if(a<b){
        cout<<b*b<<endl;
        }
        else
        {
            cout<<a*a<<endl;
        }
    }
}
