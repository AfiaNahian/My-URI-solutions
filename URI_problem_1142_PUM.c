#include <stdio.h>
int main()
{
    int n,i,j,a=1,c=4;
    while(scanf("%d",&n)==1)
    {
       for(i=1;i<=n;i++)
       {
           for(j=a;j<=c;j++)
           {
               if(j%4==0)
               {
                  printf("PUM\n");
               }
               else
               {
                  printf("%d ",j);
               }
           }
           a+=4;
           c+=4;
       }
    }
    return 0;
}
