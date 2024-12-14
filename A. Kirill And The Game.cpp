#include<bits/stdc++.h>
using namespace std;
int main(){
double l,r,x,y,k,c=0,i,m;
cin>>l>>r>>x>>y>>k;

    for(i=x;i<=y;i++){
        m=i*k;
    if(m>=l&&m<=r){
        cout<<"YES"<<endl;
        c++;
        break;
    }
    }
    if(c==0)
        cout<<"NO"<<endl;
}

