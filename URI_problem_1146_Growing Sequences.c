#include <stdio.h>
int main()
{
    int a,b,c,i;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
        {
            break;
        }
        else
        {
            b=1;
            printf("%d",b);
            for(i=1;i<a;i++)
            {
                b=i+1;
                printf(" %d",b);
            }
            printf("\n");
        }
    }
    return 0;
}
