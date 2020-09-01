#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
    {
        e=a*b-c*d;
        printf("DIFERENCA = %d\n",e);
    }
    return 0;
}
