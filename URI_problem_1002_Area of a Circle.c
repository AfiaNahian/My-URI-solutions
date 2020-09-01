#include <stdio.h>
int main()
{
    double a,b,n=3.14159;
    while(scanf("%lf",&a)==1)
    {
        b=n*a*a;
        printf("A=%.4lf\n",b);
    }
    return 0;
}
