#include <stdio.h>
int main()
{
    int a,b,c=0,d,i,j;
    double x,y,z;
    while(scanf("%d",&a)==1)
    {
        for(i=1;i<=a;i++)
        {
            c=0;
            scanf("%lf",&x);
            while(x>1)
            {
                x/=2;
                c++;
            }
            printf("%d dias\n",c);
        }
    }
    return 0;
}
