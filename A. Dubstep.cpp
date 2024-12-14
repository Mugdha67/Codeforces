#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=1,i;
    for(i=0;i<s.size();i++)
    {
      if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
            {
                i=i+2;
          if(!x)
            cout<<" ";
      }
      else
        cout<<s[i];
      x=0;
    }
    cout<<endl;

}
