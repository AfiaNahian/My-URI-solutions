#include <stdio.h>
#define pi 3.14159
int main()
{
   double a,b,c,x,y,z,m,n;
   while(scanf("%lf %lf %lf",&a,&b,&c)==3)
     {
       x=(1/2.0)*a*c;
       y=pi*c*c;
       z=(1/2.0)*(a+b)*c;
       m=b*b;
       n=a*b;
       printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",x,y,z,m,n);
     }
    return 0;
}
