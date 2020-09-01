#include <stdio.h>
int main()
{
    double a,b,c;
    char x[100];
    while(scanf("%s %lf %lf",&x,&a,&b)==3)
      {
         c=a+0.15*b;
         printf("TOTAL = R$ %.2lf\n",c);
      }
    return 0;
}
