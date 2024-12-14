#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st1;
    cin>>st1;
    int i,l=st1.size(),L=l/2;
    sort(st1.begin(),st1.end());
    for(i=L;i<l;i++)
    {
        cout<<st1[i];
        if(i<l-1)
        {
            cout<<"+";
        }
    }
    cout<<endl;
}
