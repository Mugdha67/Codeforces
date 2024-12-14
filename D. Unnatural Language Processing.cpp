#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e')
            {
                if(i==(n-1))
                {
                    cout<<s[i];
                }
                else{
                if(s[i+1]!='a'&&s[i+1]!='e')
                {
                    if(s[i+2]!='a'&&s[i+2]!='e')
                    {
                        if(i==(n-2)){
                                cout<<s[i]<<s[i+1];
                        }
                        else{
                           cout<<s[i]<<s[i+1]<<".";
                    }
                        i++;
                    }
                    else
                    {
                        if(i==(n-1))
                        {
                            cout<<s[i];
                        }
                        else
                           cout<<s[i]<<".";
                    }
                }

            }
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}
