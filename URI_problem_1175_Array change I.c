#include <stdio.h>
int main()
{
    int x[100],i,j,k,m,n;
    for(i=0;i<20;i++)
    {
        scanf("%d",&x[i]);
    }
    m=19;
    n=0;
    while(n<m)
    {
        k=x[n];
        x[n]=x[m];
        x[m]=k;
        m--;
        n++;
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,x[i]);
    }
}
