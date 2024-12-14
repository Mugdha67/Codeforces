#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s1,AB="ab",BA="ba";
    cin>>s1;

        if(s1.begin()==s1.end())
        {
            cout<<s1;
        }
           else{
            if(s1[0]=='a')
                s1[s1.size()-1]='a';
            else if(s1[0]=='b')
                s1[s1.size()-1]='b';

            cout<<s1<<"\n";
           }

    }
    return 0;
}
