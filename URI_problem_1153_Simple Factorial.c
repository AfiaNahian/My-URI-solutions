#include <stdio.h>
int main()
{
    int a,i,m=1,n;
    while(scanf("%d",&a)==1)
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
        printf("%d\n",m);
    }
    return 0;
}
