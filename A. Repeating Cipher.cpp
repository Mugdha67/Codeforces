#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i=i+c)
    {
        cout<<s[i];
        c++;
    }
    cout<<endl;
}
