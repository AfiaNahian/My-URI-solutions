#include <stdio.h>
int main()
{
    int a,b,c,i,j,k=0,n;
    while(scanf("%d %d",&a,&b)==2)
    {
        k=0;
        if(a>b)
        {
            for(i=b+1;i<a;i++)
            {
              if((i%2==1)||(i%2==-1))
               {
                 k+=i;
               }
            }
        }

        if(b>a)
        {
            for(i=a+1;i<b;i++)
            {
              if((i%2==1)||(i%2==-1))
               {
                 k+=i;
               }
            }
        }
        printf("%d\n",k);
    }
    return 0;
}
