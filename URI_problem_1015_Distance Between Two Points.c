#include <stdio.h>
int main()
{
    double a,b,x,y,p,m,n;
    while(scanf("%lf %lf %lf %lf",&a,&b,&x,&y)==4)
     {
       m=(a-x)*(a-x);
       n=(b-y)*(b-y);
       p=sqrt(m+n);
       printf("%.4lf\n",p);
     }
    return 0;
}
