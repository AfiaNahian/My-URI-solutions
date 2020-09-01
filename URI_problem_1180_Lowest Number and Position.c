#include <stdio.h>
int main()
{
    int x[1001],i,j,k,n,p,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    k=x[0];
    for(i=0;i<n;i++)
    {
        if(k>x[i])
        {
            k=x[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",k,p);
    return 0;
}
