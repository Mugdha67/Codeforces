#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,c=0;
        cin>>n;
        while(n!=1)
        {
            if(n%6==0)
            {
                n=n/6;
                c++;
            }
            else if(n%3==0)
            {
                n=n*2;
                c++;
            }
            else
            {
                c=-1;
                break;
            }
        }
        cout<<c<<endl;
    }
}
