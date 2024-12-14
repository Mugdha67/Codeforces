#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
 {
    int N,K,C;
    cin>>N>>K>>C;
    vector<int>H(C);
    for(int i=0;i<C;++i)
        {
        cin>>H[i];
    }
    int P=0;
    int L=0;
    for (int day=1;day<=N;++day) {
        bool Chuti=false;
        for(int i=0;i<C;++i)
         {
            if(day==H[i])
            {
                Chuti=true;
                break;
            }
        }
        if ((day-L)%K==0||Chuti)
        {
            P++;
            L= day;
        }
    }
    cout<<P<<endl;
    return 0;
}


