#include <stdio.h>
int main()
{
    int n,i,b,j;
    long a;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%ld",&a);
            if(a==1||a==0)
            {
                printf("Not Prime\n");
            }
            else if(a==2)
            {
                printf("Prime\n");
            }
            else
            {
                b=0;
                for(j=2;j<=sqrt(a)+1;j++)
                  {
                   if(a%j==0)
                     {
                       b=1;
                       break;
                     }
                   }
                 if(b==1)
                     printf("Not Prime\n");
                 if(b==0)
                     printf("Prime\n");
              }
        }
    }
    return 0;
}
