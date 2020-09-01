#include <stdio.h>
int main()
{
    int a,i,j,b,c=0,x=0,y=0,z=0;
    double p,q,r;
    char m,n;
    while(scanf("%d",&a)==1)
    {
        for(i=1;i<=a;i++)
        {
            scanf("%d %c",&b,&m);
            c+=b;
            if(m=='C')
            {
                x+=b;
            }
            if(m=='R')
            {
                y+=b;
            }
            if(m=='S')
            {
                z+=b;
            }
        }
        p=(float)x/c*100;
        q=(float)y/c*100;
        r=(float)z/c*100;
        printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",c,x,y,z);
        printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",p,q,r);
    }
    return 0;
}
