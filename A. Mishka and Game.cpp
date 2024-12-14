#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,A=0,B=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
            A++;
        else if(b>a)
            B++;
    }
    if(A>B)
        cout<<"Mishka"<<endl;
    else if(B>A)
    cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
}
