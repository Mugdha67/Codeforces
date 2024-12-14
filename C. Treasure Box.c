#include<stdio.h>

int main()
{
    int A,B,C,X,Y;
    scanf("%d%d%d%d%d",&A,&B,&C,&X,&Y);
    if(A<=X&&B<=Y)
    printf("NO");
    else if(A<=X&&C<=Y)
    printf("NO");
    else if(B<=X&&A<=Y)
    printf("NO");
    else if(B<=X&&C<=Y)
    printf("NO");
    else if(C<=X&&A<=Y)
    printf("NO");
    else if(C<=X&&B<=Y)
    printf("NO");
    else
printf("YES");

    return 0;
}
