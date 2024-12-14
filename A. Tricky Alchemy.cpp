#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long A,B,x,y,z;
    cin>>A>>B>>x>>y>>z;
    long long Y=x*2+y,Z=z*3+y;
    if(A>=Y)
        A=0;
    else
        A=Y-A;
    if(B>=Z)
        B=0;
        else
        B=Z-B;

    cout<<A+B<<endl;
}

