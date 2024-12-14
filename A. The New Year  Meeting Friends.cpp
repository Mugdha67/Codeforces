#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=abs(a-b);
    y=abs(b-c);
    z=abs(c-a);
    if(x>y&&x>z)
        cout<<x<<endl;
    else if(y>x&&y>z)
        cout<<y<<endl;
        else
        cout<<z<<endl;

}
