#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,H,M;
        cin>>h>>m;
        H=(23-h)*60;
        M=60-m;
        cout<<H+M<<endl;
    }
}
