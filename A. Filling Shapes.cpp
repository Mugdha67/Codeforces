#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    if(n%2==0)
    {
        a=n/2;
        n=pow(2,a);
        cout<<n<<endl;
    }
    else
        cout<<0<<endl;
}
