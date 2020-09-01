#include <stdio.h>
int main()
{
    int a,b,c,x,y,z,n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            a=i*i;
            b=i*i*i;
            printf("%d %d %d\n",i,a,b);
        }
    }
    return 0;
}
