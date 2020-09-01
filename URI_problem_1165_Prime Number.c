#include <stdio.h>
int main()
{
    int a,n,i,j,k;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a);
            if(a==1||a==0)
            {
               printf("%d nao eh primo\n",a);
            }
            else if(a==2)
            {
                printf("%d eh primo\n",a);
            }
            else
            {
                k=1;
            for(j=2;j<=sqrt(a)+1;j++)
            {
                if(a%j==0)
                {
                    k=0;
                    break;
                }
            }
            if(k==0)
            {
                printf("%d nao eh primo\n",a);
            }
            else
            {
                printf("%d eh primo\n",a);
            }
            }

        }
    }
    return 0;
}
