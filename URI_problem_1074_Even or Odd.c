#include <stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
       for(j=1;j<=n;j++)
       {
           scanf("%d",&i);
           if(i==0)
           {
               printf("NULL\n");
           }
           if((i>0)&&(i%2==0))
           {
               printf("EVEN POSITIVE\n");
           }
           if((i>0)&&(i%2==1))
           {
               printf("ODD POSITIVE\n");
           }
           if((i<0)&&(i%2==0))
           {
               printf("EVEN NEGATIVE\n");
           }
           if((i<0)&&(i%2==-1))
           {
               printf("ODD NEGATIVE\n");
           }
       }
    }
    return 0;
}
