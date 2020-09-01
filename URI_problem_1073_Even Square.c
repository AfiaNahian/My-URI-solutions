#include <stdio.h>
int main()
{
    int n,i,a;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
              a=i*i;
              printf("%d^2 = %d\n",i,a);
            }
        }
    }
    return 0;
}
