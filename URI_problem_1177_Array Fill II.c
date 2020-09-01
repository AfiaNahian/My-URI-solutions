#include <stdio.h>
int main()
{
    int n[1001],i,j,k,m,a,b,c;
    scanf("%d",&a);
         for(i=0,j=0;i<1000;i++)
          {
            printf("N[%d] = %d\n",i,j);
            j++;
            if(j==a)
            {
                j=0;
            }
          }
    return 0;
}
