#include <stdio.h>
int main()
{
    int a,b,c;
    double x,y,z;
    while(scanf("%d %d",&a,&b)==2)
    {
        x=0.0;
        if(a==1)
        {
            x=b*4.00;
            printf("Total: R$ %.2lf\n",x);
        }
        if(a==2)
        {
            x=b*4.50;
            printf("Total: R$ %.2lf\n",x);
        }
        if(a==3)
        {
            x=b*5.00;
            printf("Total: R$ %.2lf\n",x);
        }
        if(a==4)
        {
            x=b*2.00;
            printf("Total: R$ %.2lf\n",x);
        }
        if(a==5)
        {
            x=b*1.50;
            printf("Total: R$ %.2lf\n",x);
        }
    }
    return 0;
}
