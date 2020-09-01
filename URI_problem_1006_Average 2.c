#include <stdio.h>
int main()
{
    double a,b,c,d;
    while(scanf("%lf %lf %lf",&a,&b,&d)==3)
    {
        c=((a*2)+(b*3)+(d*5))/(2+3+5);
        printf("MEDIA = %.1lf\n",c);
    }
    return 0;
}
