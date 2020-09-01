#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==b)
        {
            break;
        }
        if(a>b)
        {
            printf("Decrescente\n");
        }
        if(a<b)
        {
            printf("Crescente\n");
        }
    }
    return 0;
}
