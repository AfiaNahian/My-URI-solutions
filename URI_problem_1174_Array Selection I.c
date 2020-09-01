#include <stdio.h>
int main()
{
    double x[101];
    int i,j,k;
    for(i=0;i<100;i++)
    {
        scanf("%lf",&x[i]);
    }
    for(i=0;i<100;i++)
    {
        if(x[i]<=10.0)
        {
            printf("A[%d] = %.1lf\n",i,x[i]);
        }
    }
    return 0;
}
