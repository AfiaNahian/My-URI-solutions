#include <stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b)==2)
    {
        c=b-a;
        if(c==0)
        {
            c=24;
        }
        if(c<0)
        {
            c=24+c;
        }
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    return 0;
}
