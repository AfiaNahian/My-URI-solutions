#include <stdio.h>
int main()
{
    float a,b,c,d;
    while(scanf("%f %f %f",&a,&b,&c)==3)
    {
        if((b+c>a)&&(a+c>b)&&(a+b>c))
        {
            d=a+b+c;
            printf("Perimetro = %.1lf\n",d);
        }
        else
        {
            d=(1/2.0)*(a+b)*c;
            printf("Area = %.1lf\n",d);
        }
    }
    return 0;
}
