#include <stdio.h>
int main()
{
    int i,a;
    while(scanf("%d",&a)==1)
    {
        for(i=1;i<=a;i++)
        {
            if(i%2==1)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
