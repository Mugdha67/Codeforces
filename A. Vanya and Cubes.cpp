#include<bits/stdc++.h>
using namespace std;
int main()
//_____________Ki amar code dekhte ascho??___________//
{
    int n,i,c=0,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        n=n-sum;
        c++;
        if(n==0)
        {
            break;
        }
        else if(n<0)
        {
            c--;
            break;
        }
    }
    cout<<c<<endl;
}
