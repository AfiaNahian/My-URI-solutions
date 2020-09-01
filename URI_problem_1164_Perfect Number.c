#include<stdio.h>
int main()
{
    int a,n,i,j,k,l,m,sum;
    while(scanf("%d",&n)==1)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a);
            sum=0;
            for(i=1;i<=a/2;i++)
              {
                  if(a%i==0)
                  sum=sum+i;
              }
            if(sum==a)
             {
               printf("%d eh perfeito\n",a);
             }
             else
             {
                 printf("%d nao eh perfeito\n",a);
             }
        }
    }
    return 0;
}
