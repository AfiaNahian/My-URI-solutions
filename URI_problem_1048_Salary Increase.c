#include <stdio.h>
int main()
{
    double a,b,c,d,e;
    while(scanf("%lf",&a)==1)
    {
        b=0.0;
        c=0.0;
        if((a>0.0)&&(a<=400.00))
         {
            b=a*0.15;
            c=a+b;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",c,b);
         }
         if((a>400.00)&&(a<=800.00))
         {
            b=a*0.12;
            c=a+b;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",c,b);
         }
         if((a>800.00)&&(a<=1200.00))
         {
            b=a*0.10;
            c=a+b;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",c,b);
         }
         if((a>1200.00)&&(a<=2000.00))
         {
            b=a*0.07;
            c=a+b;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",c,b);
         }
         if(a>2000.00)
         {
            b=a*0.04;
            c=a+b;
            printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",c,b);
         }
    }
    return 0;
}
