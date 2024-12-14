#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,c=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i%2==0)
            {
                cout<<"#";
            }
            else
            {
                if(c%2==0){
                    if(j==m){
                   cout<<"#";
                    }
                    else if(j!=m)
                        cout<<".";
                   }
                   else
                   {
                       if(j==1){
                   cout<<"#";
                    }
                    else if(j!=1){
                        cout<<".";
                    }
                   }
            }
        }
        cout<<endl;
         if(i%2!=0)
                   {
                       c++;
                   }
    }
}
