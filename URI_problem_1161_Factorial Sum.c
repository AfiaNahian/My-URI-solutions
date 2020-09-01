#include <stdio.h>
int main()
{
    long long a,b,p,q,i,j,m,n,c;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        m=1;
        if(a==1||a==0)
        {
            m=1;
        }
        for(i=2;i<=a;i++)
        {
            m*=i;
        }
        n=1;
        if(b==1||b==0)
        {
            n=1;
        }
        for(j=2;j<=b;j++)
        {
            n*=j;
        }
        c=m+n;
        printf("%lld\n",c);
    }
    return 0;
}
