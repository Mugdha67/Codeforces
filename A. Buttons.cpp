#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            if(c%2==0)
            {
                cout<<"Second"<<endl;
            }
            else
            cout<<"First"<<endl;
        }
        else
        {
            if(a>b)
            {
                cout<<"First"<<endl;
            }
            else
            cout<<"Second"<<endl;
        }
    }
}
