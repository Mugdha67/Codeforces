#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j;
    cin>>a>>b>>c;
    for(i=0;i<=c;i++)
    {
        for(j=0;j<=c;j++)
        {
            if((a*i)+(b*j)==c)
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
        cout<<"No"<<endl;

}
