#include <stdio.h>
int main()
{
    int n,a,b,c,i,j;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&a,&b);
            c=0;
            if(a>b)
            {
                for(j=b+1;j<a;j++)
                {
                    if(j%2==1)
                    {
                        c+=j;
                    }
                }
            }
            if(a<b)
            {
                for(j=a+1;j<b;j++)
                {
                    if(j%2==1)
                    {
                        c+=j;
                    }
                }
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
