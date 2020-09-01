#include <stdio.h>
int main()
{
    int x,y,i,j,m,n,l=1;
    while(scanf("%d %d",&x,&y)==2)
    {
       m=y/x;
       n=x;
       for(i=1;i<=m;i++)
       {
            printf("%d",l);
            for(j=l+1;j<=n;j++)
            {
               printf(" %d",j);
            }
            printf("\n");
            l+=x;
            n+=x;
       }
    }
    return 0;
}
