#include <stdio.h>
int main()
{
    int x,i;
    double a,b,c,d,e,f;
    while(scanf("%d",&x)==1)
    {
        c=0.00;
        for(i=1;i<=x;i++)
        {
            scanf("%lf %lf",&a,&b);
            if(b==0)
            {
                printf("divisao impossivel\n");
            }
            if(b!=0)
            {
               c=a/b;
               printf("%.1lf\n",c);
            }
        }
    }
    return 0;
}
