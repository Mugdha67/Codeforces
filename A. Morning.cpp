#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st;
        cin>>st;
        int i,c=0,x;
        st[-1]=1;
        for(i=0;i<4;i++)
        {
            st[i]=st[i]-'0';
            if(st[i]==0)
            {
                st[i]=10;
            }
            x=abs(st[i]-st[i-1]);
            c=c+x;
        }
        cout<<c+4<<endl;
    }
}
