#include <stdio.h>
int main()
{
    int a,b,c,d;
    double e,f,g;
    while(scanf("%d %d %lf %d %d %lf",&a,&b,&e,&c,&d,&f)==6)
      {
         g=b*e+d*f;
         printf("VALOR A PAGAR: R$ %.2lf\n",g);
      }
    return 0;
}
