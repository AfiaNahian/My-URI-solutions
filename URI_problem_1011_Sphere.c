#include <stdio.h>
#define pi 3.14159
int main()
{
    double a,b;
    while(scanf("%lf",&a)==1)
      {
        b=(4.0/3)*pi*a*a*a;
        printf("VOLUME = %.3lf\n",b);
      }
    return 0;
}
