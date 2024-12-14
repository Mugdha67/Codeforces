#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,c=0,a=1;
        cin>>k;
        while(1){
            if(a%3!=0&&a%10!=3)
            {
                c++;
                if(c==k){
                    cout<<a<<endl;
                break;
                }
            }
            a++;
            }
    }
}
