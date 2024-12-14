#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    while(1)
    {
        n--;
        m--;
        if(n==0||m==0)
        {
            cout<<"Akshat"<<endl;
            break;
        }
        n--;
        m--;
        if(n==0||m==0)
        {
            cout<<"Malvika"<<endl;
            break;
        }
    }
}
