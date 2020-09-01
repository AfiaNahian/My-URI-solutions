#include <stdio.h>
int main()
{
    int n,i,a=0,b=0,c;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&c);
            if((c>=10)&&(c<=20))
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        printf("%d in\n%d out\n",a,b);
    }
    return 0;
}
