#include <stdio.h>
int main()
{
    int a,b,c=0,d,i;
    while(scanf("%d %d",&a,&b)==2)
    {
        c=0;
        if(a>b)
        {
           for(i=b;i<=a;i++)
           {
              if(i%13!=0)
              {
                  c+=i;
              }
           }
            printf("%d\n",c);
        }
        if(b>a)
        {
            for(i=a;i<=b;i++)
            {
              if(i%13!=0)
              {
                  c+=i;
              }
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
