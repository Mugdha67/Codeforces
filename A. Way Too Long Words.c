#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++)
    {
        char a[100];
        int l;
        gets(a);
        l=strlen(a);
        if(l<=10)
        {
            printf("%s",a);
        }
        else
        {
            printf("%c%d%c",a[0],l-2,a[l-1]);
        }
      if(i<n)
            printf("\n",i);
    }
    return 0;
}
