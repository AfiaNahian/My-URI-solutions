#include <stdio.h>
int main()
{
    double a,b,c;
    while(scanf("%lf %lf",&a,&b)==2)
     {
        c=a/b;
        printf("%.3lf km/l\n",c);
     }
    return 0;
}
