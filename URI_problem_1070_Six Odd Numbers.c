#include <stdio.h>
int main()
{
    int a,b,i,j;
    while(scanf("%d",&a)==1)
    {
           for(j=a;j<=a+11;j++)
           {
              if(j%2==1)
               {
                   printf("%d\n",j);
               }
           }
    }
    return 0;
}
