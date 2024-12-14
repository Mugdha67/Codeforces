#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,A;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int D=(k*l)/nl;
    int L=c*d;
    A=(min(min(D,L),(p/np)))/n;
    cout<<A<<endl;
}
