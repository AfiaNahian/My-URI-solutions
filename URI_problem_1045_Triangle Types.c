#include <stdio.h>
int main()
{
    double a,b,c,t;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
       {
         if(a<b)
          {
            t = a;
            a = b;
            b = t;
          }
         if(b<c)
          {
            t = b;
            b = c;
            c = t;
          }
        if(a<b)
         {
            t = a;
            a = b;
            b = t;
         }
         if(a>=b+c)
         {
           printf("NAO FORMA TRIANGULO\n");
         }
        else if(a*a==b*b+c*c)
         {
           printf("TRIANGULO RETANGULO\n");
         }
        else if(a*a>b*b+c*c)
         {
           printf("TRIANGULO OBTUSANGULO\n");
         }
        else if(a*a<b*b+c*c)
         {
           printf("TRIANGULO ACUTANGULO\n");
         }
        if(a==b&&b==c)
         {
           printf("TRIANGULO EQUILATERO\n");
         }
         else if(a==b||b==c)
         {
           printf("TRIANGULO ISOSCELES\n");
         }
     }
    return 0;
}

