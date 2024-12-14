#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    s.erase((unique(s.begin(),s.end())),s.end());
    int n=s.size();
    if(n%2==0)
        cout<<"CHAT WITH HER!\n";
    else
        cout<<"IGNORE HIM!\n";
}
