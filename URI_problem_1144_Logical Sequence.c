#include <stdio.h>
int main()
{
    int i,j,n,a,b,c,d;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
           a=i*i;
           b=i*a;
           c=a+1;
           d=b+1;
           printf("%d %d %d\n%d %d %d\n",i,a,b,i,c,d);
        }
    }
    return 0;
}
