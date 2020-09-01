#include <stdio.h>
int main()
{
    double a,b,c;
    while(scanf("%lf %lf",&a,&b)==2)
    {
        if((a>0)&&(b>0))
        {
            printf("Q1\n");
        }
        if((a<0)&&(b>0))
        {
            printf("Q2\n");
        }
        if((a<0)&&(b<0))
        {
            printf("Q3\n");
        }
        if((a>0)&&(b<0))
        {
            printf("Q4\n");
        }
        if((a==0)&&(b==0))
        {
           printf("Origem\n");
        }
        if((a==0)&&(b!=0))
        {
           printf("Eixo Y\n");
        }
        if((a!=0)&&(b==0))
        {
           printf("Eixo X\n");
        }
    }
    return 0;
}
