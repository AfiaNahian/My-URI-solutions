#include <stdio.h>
int main()
{
    int x[100],i=0,j,k,a;
    scanf("%d",&a);
    x[0]=a;
    for(i=0;i<10;i++)
    {
        x[i+1]=x[i]*2;
    }
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,x[i]);
    }
    return 0;
}
