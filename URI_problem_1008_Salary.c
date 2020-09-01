#include <stdio.h>
int main()
{
    int a,b;
    double c,d;
    while(scanf("%d %d %lf",&a,&b,&c)==3)
      {
         d=b*c;
         printf("NUMBER = %d\n",a);
         printf("SALARY = U$ %.2lf\n",d);
      }
    return 0;
}
