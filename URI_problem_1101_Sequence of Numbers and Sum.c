#include <stdio.h>
int main()
{
    int a,b,i,j,c=0,m,n,o;
    while(scanf("%d %d",&a,&b)==2)
    {
       c=0;
       if((a<=0)||(b<=0))
       {
           break;
       }
       if(a>b)
       {
           for(i=b;i<=a;i++)
           {
              c+=i;
              printf("%d ",i);
           }
           printf("Sum=%d\n",c);
       }
       if(a<b)
       {
           for(i=a;i<=b;i++)
           {
              c+=i;
              printf("%d ",i);
           }
           printf("Sum=%d\n",c);
       }
    }
    return 0;
}
