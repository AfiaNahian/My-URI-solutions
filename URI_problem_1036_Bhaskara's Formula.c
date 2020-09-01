#include <stdio.h>
int main()
{
    double a,b,c,d,e,f;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        d=b*b-4*a*c;
        e=(-b+sqrt(d))/(2*a);
        f=(-b-sqrt(d))/(2*a);
        if((d<0)||(a==0))
           {
               printf("Impossivel calcular\n");
           }
        else
            {
                printf("R1 = %.5lf\nR2 = %.5lf\n",e,f);
            }
    }
    return 0;
}
