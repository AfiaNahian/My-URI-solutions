#include <stdio.h>
int main()
{
    int a,b,c,d,e,x=0,y=0,z=0,m=0,n=0,o=0;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)==5)
    {
        if(a%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
        if(a>0)
        {
            m++;
        }
        if(a<0)
        {
            n++;
        }
         if(b%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
        if(b>0)
        {
            m++;
        }
        if(b<0)
        {
            n++;
        }
         if(c%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
        if(c>0)
        {
            m++;
        }
        if(c<0)
        {
            n++;
        }
         if(d%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
        if(d>0)
        {
            m++;
        }
        if(d<0)
        {
            n++;
        }
         if(e%2==0)
        {
            x++;
        }
        else
        {
            y++;
        }
        if(e>0)
        {
            m++;
        }
        if(e<0)
        {
            n++;
        }
        printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",x,y,m,n);
    }
    return 0;
}
