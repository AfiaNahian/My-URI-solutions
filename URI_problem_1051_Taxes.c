#include <stdio.h>
int main()
{
    double a,b,c;
    while(scanf("%lf",&a)==1)
    {
        b=0.0;
        c=0.0;
        if((a>=0)&&(a<=2000.00))
        {
            printf("Isento\n");
        }
        if((a>2000.00)&&(a<=3000.00))
        {
            c=a-2000.00;
            b=c*0.08;
            printf("R$ %.2lf\n",b);
        }
        if((a>3000.00)&&(a<=4500.00))
        {
            c=a-3000.00;
            b=80.00+c*0.18;
            printf("R$ %.2lf\n",b);
        }
        if(a>4500.00)
        {
            c=a-4500.00;
            b=80.00+270.00+c*0.28;
            printf("R$ %.2lf\n",b);
        }
    }
    return 0;
}
