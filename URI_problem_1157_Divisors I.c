#include <stdio.h>
int main()
{
    int a,b,j,i;
    while(scanf("%d",&a)==1)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0)
            {
                printf("%d\n",i);
            }

        }
    }
    return 0;
}
