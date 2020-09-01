#include <stdio.h>
int main()
{
    int a,b,c,d,i;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a>b)
        {
            for(i=b+1;i<a;i++)
            {
                if((i%5==2)||(i%5==3))
                   {
                       printf("%d\n",i);
                   }
            }
        }
        if(b>a)
        {
            for(i=a+1;i<b;i++)
            {
                if((i%5==2)||(i%5==3))
                {
                    printf("%d\n",i);
                }
            }
        }
    }
    return 0;
}
