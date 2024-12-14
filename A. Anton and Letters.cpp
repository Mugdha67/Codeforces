#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    unordered_set<char>a;
    int c=0,i,l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]>='a'&&s[i]<='z'){
            a.insert(s[i]);
        }
    }
    cout<<a.size()<<endl;
}
