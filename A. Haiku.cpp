#include<iostream>
#include<string>
using namespace std;
int vowelcount(const string& line)
{
    int v=0;
    for(char i : line)
    {
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
        {
            v++;
        }
    }
    return v;
}
int main()
{
    string phrase[3];
    for(int i=0;i<3;++i)
    {
        getline(cin>>ws,phrase[i]);
    }
    int syllable[3];
    for(int i=0;i<3;++i)
    {
        syllable[i]=vowelcount(phrase[i]);
    }
    if(syllable[0]==5&&syllable[1]==7&&syllable[2]==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

