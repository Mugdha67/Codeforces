#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;;
    cin>>y;
    while(1)
    {
        int a,b,c,d;
        y++;
         a=(y/1000);
         b=(y/100)%10;
         c=(y/10)%10;
         d=(y%10);
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
        {
            cout<<y<<endl;
            break;
        }
    }
    return 0;
}

