#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
        int n;
        cin>>n;
        int chips=0;
        int total_distance=0;
        int last_chip_position=-1;
        for (int i=0;i<n;i++)
            {
            int c;
            cin>>c;
            if (c==1)
                {
                chips++;
                if (last_chip_position != -1) {
                    total_distance += i - last_chip_position - 1;
                }
                last_chip_position=i;
            }
        }
        cout<<total_distance<<endl;
    }
    return 0;
}

