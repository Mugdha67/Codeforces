#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        s[1]=s[1]-'0';
        if(s[0]=='a')
        {
            for(i=1;i<=8;i++)
            {
                if(s[1]==i)
                {
                    a=i;
                    continue;
                }
                cout<<s[0]<<i<<endl;
            }
            for(i=0;i<8;i++)
            {
                if('a'+i==s[0])
                {
                    continue;
                }
                b='a'+i;
                printf("%c",b);
                cout<<a<<endl;
            }
        }
        else if(s[0]=='b')
        {
            for(i=1;i<=8;i++)
            {
                if(s[1]==i)
                {
                    a=i;
                    continue;
                }
                cout<<s[0]<<i<<endl;
            }
            for(i=0;i<8;i++)
            {
                if('a'+i==s[0])
                {
                    continue;
                }
                b='a'+i;
                printf("%c",b);
                cout<<a<<endl;
            }
        }
        else if(s[0]=='c')
        {
            for(i=1;i<=8;i++)
            {
                if(s[1]==i)
                {
                    a=i;
                    continue;
                }
                cout<<s[0]<<i<<endl;
            }
            for(i=0;i<8;i++)
            {
                if('a'+i==s[0])
                {
                    continue;
                }
                b='a'+i;
                printf("%c",b);
                cout<<a<<endl;
            }
        }
        else if(s[0]=='d')
        {
            for(i=1;i<=8;i++)
            {
                if(s[1]==i)
                {
                    a=i;
                    continue;
                }
                cout<<s[0]<<i<<endl;
            }
            for(i=0;i<8;i++)
            {
                if('a'+i==s[0])
                {
                    continue;
                }
                b='a'+i;
                printf("%c",b);
                cout<<a<<endl;
            }
        }
        else if(s[0]=='e')
        {
            for(i=1;i<=8;i++)
            {
                if(s[1]==i)
                {
                    a=i;
                    continue;
                }
                cout<<s[0]<<i<<endl;
            }
            for(i=0;i<8;i++)
            {
                if('a'+i==s[0])
                {
                    continue;
                }
                b='a'+i;
                printf("%c",b);
                cout<<a<<endl;
            }
        }
        else if(s[0]=='f')
        {
            for(i=1;i<=8;i++)
            {
                if(s[1]==i)
                {
                    a=i;
                    continue;
                }
                cout<<s[0]<<i<<endl;
            }
            for(i=0;i<8;i++)
            {
                if('a'+i==s[0])
                {
                    continue;
                }
                b='a'+i;
                printf("%c",b);
                cout<<a<<endl;
            }
        }
        else if(s[0]=='g')
        {
            for(i=1;i<=8;i++)
            {
                if(s[1]==i)
                {
                    a=i;
                    continue;
                }
                cout<<s[0]<<i<<endl;
            }
            for(i=0;i<8;i++)
            {
                if('a'+i==s[0])
                {
                    continue;
                }
                b='a'+i;
                printf("%c",b);
                cout<<a<<endl;
            }
        }
        else if(s[0]=='h')
        {
            for(i=1;i<=8;i++)
            {
                if(s[1]==i)
                {
                    a=i;
                    continue;
                }
                cout<<s[0]<<i<<endl;
            }
            for(i=0;i<8;i++)
            {
                if('a'+i==s[0])
                {
                    continue;
                }
                b='a'+i;
                printf("%c",b);
                cout<<a<<endl;
            }
        }
    }
}
