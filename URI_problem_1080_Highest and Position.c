#include <stdio.h>
int main()
{
    int x,i,j=0,k=0,p;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&x);
        j++;
        if(x>k)
        {
             p=j;
             k=x;
        }
    }
    printf("%d\n%d\n",k,p);
    return 0;
}
