#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            c++;
            cout<<"HARD"<<endl;
            break;
        }
    }
    if(c==0)
    {
        cout<<"EASY"<<endl;
    }
}
