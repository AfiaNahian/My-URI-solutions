#include <stdio.h>
int main()
{
    int a,b,c=0,n,i,j,k;
    float f,g=0,h;
    while(scanf("%f",&f)==1)
    {
        if((f>=0)&&(f<=10))
           {
               g+=f;
               c++;
           }
        else
        {
            printf("nota invalida\n");
        }
        if(c==2)
        {
            h=g/c;
            printf("media = %.2lf\n",h);
            break;
        }
    }
    return 0;
}

