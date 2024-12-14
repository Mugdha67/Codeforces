#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string st,r;
    cin>>st;
    if(st[0]>='a'&&st[0]<='z')
    {
        st[0] = st[0] - 32;
    }
    cout<<st<<endl;
}
/*#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string st,r;
    cin>>st;
    if(islower(st[0]))
    {
        st[0] = st[0] - 32;
    }
    cout<<st<<endl;
}

