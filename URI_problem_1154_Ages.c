#include <stdio.h>
int main()
{
    int a,b,e=0;
    double c=0,d;
    while(scanf("%d",&a)==1)
    {
        if(a<0)
        {
           break;
        }
        else
        {
            c+=a;
            e++;
        }
    }
    d=c/e;
    printf("%.2lf\n",d);
    return 0;
}
