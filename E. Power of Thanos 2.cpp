#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, a, b, c,t;
    int C=0;
    cin>>x>>a>>b>>c;
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
    }
     if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }

    if (x >= a + 1) {
        C++;
        x= x-(a + 1);
    }
    if (x >= b + 1) {
        C++;
        x=x-(b + 1);
    }
    if (x >= c + 1) {
        C++;
        x=x-( c + 1);
    }

    if (C == 3) {
        printf("YES\n");
    } else {
        printf("NO %d\n", C);
    }

    return 0;
}
