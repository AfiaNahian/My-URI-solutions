#include <stdio.h>
int main()
{
    double a;
    while(scanf("%lf",&a)==1)
    {
        if((a>25)&&(a<=50))
        {
            printf("Intervalo (25,50]\n");
        }
        if((a>=0)&&(a<=25))
        {
            printf("Intervalo [0,25]\n");
        }
        if((a>50)&&(a<=75))
        {
            printf("Intervalo (50,75]\n");
        }
        if((a>75)&&(a<=100))
        {
            printf("Intervalo (75,100]\n");
        }
        if((a<0)||(a>100))
        {
            printf("Fora de intervalo\n");
        }
    }
    return 0;
}
