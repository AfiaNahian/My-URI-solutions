#include <stdio.h>
int main()
{
    int a,i;
    double x,y,z,m;
    while(scanf("%d",&a)==1)
    {
        m=0.0;
        for(i=1;i<=a;i++)
        {
            scanf("%lf %lf %lf",&x,&y,&z);
            m=((x*2)+(y*3)+(z*5))/10;
            printf("%.1lf\n",m);
        }
    }
    return 0;
}
