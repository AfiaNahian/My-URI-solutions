#include <stdio.h>
int main()
{
    double a,b,c,d;
    while(scanf("%lf %lf",&a,&b)==2)
     {
        c=a*b;
        d=c/12;
        printf("%.3lf\n",d);
     }
    return 0;
}
