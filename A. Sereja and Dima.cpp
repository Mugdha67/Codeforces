#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1001],i,s=0,d=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(c%2==0)
        {
            if(a[i]>a[n-1])
            {
                s=s+a[i];
            }
            else
            {
                s=s+a[n-1];
                n--;
                i--;
            }
        }
        else
        {
            if(a[i]>a[n-1])
            {
                d=d+a[i];
            }
            else
            {
                d=d+a[n-1];
                n--;
                i--;
            }
        }
        c++;
    }
    cout<<s<<" "<<d<<endl;
}
