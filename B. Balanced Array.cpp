#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,s1=0,s2=0,l;
        cin>>n;
        vector<int>b;
        if(n%4==0)
        {
            cout<<"YES"<<endl;
        for(i=1;i<=n*2;i++)
        {
            if(i%2==0&&i<=n){
            cout<<i<<" ";
            s1=s1+i;
            }
            else if(i%2==1&&i<n-1)
            {
                b.push_back(i);
            s2=s2+i;
            }
            else
            {
                if((s2+i)==s1){
                    l=i;
                    break;
                }
            }
        }
        for(i=0;i<(n/2)-1;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<l<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
