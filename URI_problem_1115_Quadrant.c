#include <stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d %d",&a,&b)==2)
    {
        if((a==0)||(b==0))
        {
            break;
        }
        if((a>0)&&(b>0))
        {
            printf("primeiro\n");
        }
        if((a<0)&&(b>0))
        {
            printf("segundo\n");
        }
        if((a<0)&&(b<0))
        {
            printf("terceiro\n");
        }
        if((a>0)&&(b<0))
        {
            printf("quarto\n");
        }
    }
    return 0;
}
