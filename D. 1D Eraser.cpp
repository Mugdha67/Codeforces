#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,c=0;
        cin>>n>>k;
        string a;
        cin>>a;
        for(i=0;i<n;i++)
        {
           if(a[i]=='B')
           {
               i=i+k-1;
               c++;
           }
        }
        cout<<c<<endl;
    }
}
