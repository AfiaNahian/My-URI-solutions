#include <stdio.h>
int main()
{
    int a,i,b;
    while(scanf("%d",&a)==1)
    {
       for(i=1;i<=10;i++)
       {
           b=a*i;
           printf("%d x %d = %d\n",i,a,b);
       }
    }
    return 0;
}
